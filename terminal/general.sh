#!/bin/bash
buildJava=false
executeAll=true
calculateAccuracy=true
calculateComparissons=true
approachesToExecute=("TableRestrictGPU")
trees=(2 5 15)
depths=(2 5 15)
datasets=("SUSY")
logName="[Bash]: "
gpu_name=$(lspci | grep -i vga | grep -oP '\[.*?\]' | sed 's/\[\|\]//g')
if [ -z "$gpu_name" ]; then
    gpu_name=$(lspci | grep -i NVIDIA | grep -oP '\[.*?\]' | sed 's/\[\|\]//g')
fi

# Define a função que imprime o quadrado com o texto dentro
print_square() {
    local text="                          RANDOM FOREST GENERATOR                           "
    local len=${#text}
    local width=$((len + 16))

    # Imprime a parte superior do quadrado
    echo "+$(printf '=%.0s' $(seq 1 $width))+"

    # Imprime as linhas intermediárias com o texto no centro
    echo "|        $text        |"

    # Imprime a parte inferior do quadrado
    echo "+$(printf '=%.0s' $(seq 1 $width))+"
}

# Define a função que imprime o quadrado com o texto dentro
print_dataset() {
    local dataset="$1"
    local text="                          $dataset                           "
    local len=${#text}
    local width=$((len + 16))

    # Imprime as linhas intermediárias com o texto no centro
    echo "        $text        "

    # Imprime a parte inferior do quadrado
    echo "+$(printf '=%.0s' $(seq 1 $width))+"
}

# Define a função que imprime o quadrado com o texto dentro
download_dataset() {
    local datasetName="$1"
    local datasetLink="$2"
    if ! test -e assets/datasets/$datasetName.csv; then
        echo $logName"Downloading Dataset $datasetName"
        gdown "$datasetLink" -O "assets/datasets/$datasetName.csv"
        #wget --no-check-certificate -O "assets/datasets/$datasetName.csv" "$datasetLink"
    fi
}

approaches_contains_element() {
    local element="$1"
    shift
    local array=("$@")
    for item in "${approachesToExecute[@]}"; do
        if [ "$item" = "$element" ]; then
            return 0 # Verdadeiro, o elemento está contido no array
        fi
    done
    return 1 # Falso, o elemento não está contido no array
}

clear
# Chama a função para imprimir o quadrado
print_square

# Verificando e interpretando os argumentos de opção
while getopts ":qf:" opt; do
    case $opt in
        all)
            executeAll=true
            ;;
    esac
done


echo $logName"GPU Name: $gpu_name"

mkdir -p assets/trees
mkdir -p assets/datasets

if [ "$buildJava" = true  ]; then
    echo $logName"Building Java Project"
    mvn -q clean package
fi

if ! which pip >/dev/null 2>&1; then
    echo $logName"Intalling pip"
    sudo apt install python3-pip
fi

if ! pip show scikit-learn >/dev/null 2>&1; then
    echo $logName"Intalling Scikit-Learn"
fi

if ! pip show numpy >/dev/null 2>&1; then
    echo $logName"Intalling Numpy"
    pip install --upgrade numpy
fi

if ! pip show pandas >/dev/null 2>&1; then
    echo $logName"Intalling Pandas"
    pip install --upgrade pandas
fi

if ! pip show gdown >/dev/null 2>&1; then
    echo $logName"Intalling GDown"
    pip install --upgrade gdown
fi


if ! test -d "jdk-20.0.2"; then
    echo $logName" Downloading JDK 20.0.2" 
    jdk_url="https://download.oracle.com/java/20/archive/jdk-20.0.2_linux-x64_bin.tar.gz"
    wget "$jdk_url"  
    jdk_file=$(basename "$jdk_url")
    tar -xzf "$jdk_file"
fi

if ! which nvcc >/dev/null 2>&1; then
    echo $logName"Installing NVCC"
    sudo apt install nvidia-cuda-toolkit
fi
download_dataset "SUSY" "https://drive.google.com/uc?id=1vsp4gpJy0QfLnDEsXdPO4WrxU-YBa_l5"
download_dataset "SUSY2" "https://drive.google.com/uc?id=1DJNIc8liQKfIPsKn5M2-USoj45wHKvAv"

if test -e results/results.csv; then
    echo $logName"The results file already exists, appending results."
else
    echo $logName"Creating results file"
    echo "Dataset,Trees,Depth,Accuracy Scikit,GPU,Time,Comparissons,Approach" > results/results.csv
fi

for dataset in "${datasets[@]}"
do
    print_dataset "$dataset"
    for tree in "${trees[@]}"
    do
        for depth in "${depths[@]}"
        do
            echo "------- T: $tree | D: $depth"
            echo $logName"Training Dataset $dataset with $tree trees and $depth of depth"
            python3 src/main/python/tree_generator.py "$dataset" $tree $depth "results/results.csv" 
            echo -e -n ",$gpu_name" >> results/results.csv
            trainingResults=$(tail -n 1 "results/results.csv")
            sed -i '$ d' "results/results.csv"
            
            if [ "$executeAll" = "true" ] || approaches_contains_element "ConditionalGPU" "${approachesToExecute[@]}"; then
                echo "------ Conditional GPU"
                echo -e -n "\n"$trainingResults >> results/results.csv
                echo $logName"Executing with $tree trees and $depth of depth"
                jdk-20.0.2/bin/java -jar target/RandomForest-1.0.jar $dataset ConditionalGPU
                nvcc -o generated/gpu/conditional/rf_with_if generated/gpu/conditional/rf_with_if.cu --disable-warnings
                nvprof --quiet ./generated/gpu/conditional/rf_with_if
                if [ "$calculateComparissons" = "true" ]; then
                    echo "------ Conditional GPU Counting Comparissons"
                    jdk-20.0.2/bin/java -jar target/RandomForest-1.0.jar $dataset ConditionalCountGPU
                    nvcc -o generated/gpu/conditional/rf_with_if_count generated/gpu/conditional/rf_with_if_count.cu --disable-warnings
                    nvprof --quiet ./generated/gpu/conditional/rf_with_if_count
                fi
                echo -e -n ",Conditional GPU" >> results/results.csv
            fi

            if [ "$executeAll" = "true" ] || approaches_contains_element "TableGPU" "${approachesToExecute[@]}"; then
                echo "------ Table GPU with local memory"
                echo -e -n "\n"$trainingResults >> results/results.csv
                echo $logName"Executing with $tree trees and $depth of depth"
                jdk-20.0.2/bin/java -jar target/RandomForest-1.0.jar $dataset TableGPU
                nvcc -o generated/gpu/table/local/rf_with_table generated/gpu/table/local/rf_with_table.cu --disable-warnings
                nvprof --quiet ./generated/gpu/table/local/rf_with_table
                if [ "$calculateComparissons" = "true" ]; then
                    echo "------ Table GPU with local memory Counting Comparissons"
                    jdk-20.0.2/bin/java -jar target/RandomForest-1.0.jar $dataset TableCountGPU
                    nvcc -o generated/gpu/table/local/rf_with_table_count generated/gpu/table/local/rf_with_table_count.cu --disable-warnings
                    nvprof --quiet ./generated/gpu/table/local/rf_with_table_count
                fi
                echo -e -n ",Table GPU with local memory" >> results/results.csv
            fi

            if [ "$executeAll" = "true" ] || approaches_contains_element "TableConstantGPU" "${approachesToExecute[@]}"; then
                echo "------ Table GPU with constant memory"
                echo -e -n "\n"$trainingResults >> results/results.csv
                echo $logName"Executing with $tree trees and $depth of depth"
                jdk-20.0.2/bin/java -jar target/RandomForest-1.0.jar $dataset TableConstantGPU
                nvcc -o generated/gpu/table/constant/rf_with_table generated/gpu/table/constant/rf_with_table.cu --disable-warnings
                nvprof --quiet ./generated/gpu/table/constant/rf_with_table
                if [ "$calculateComparissons" = "true" ]; then
                    echo "------ Table GPU with constant memory Counting Comparissons"
                    jdk-20.0.2/bin/java -jar target/RandomForest-1.0.jar $dataset TableConstantCountGPU
                    nvcc -o generated/gpu/table/constant/rf_with_table_count generated/gpu/table/constant/rf_with_table_count.cu --disable-warnings
                    nvprof --quiet ./generated/gpu/table/constant/rf_with_table_count
                fi
                echo -e -n ",Table GPU with constant memory" >> results/results.csv
            fi

            if [ "$executeAll" = "true" ] || approaches_contains_element "TableSharedGPU" "${approachesToExecute[@]}"; then
                echo "------ Table GPU with shared memory"
                echo -e -n "\n"$trainingResults >> results/results.csv
                echo $logName"Executing with $tree trees and $depth of depth"
                jdk-20.0.2/bin/java -jar target/RandomForest-1.0.jar $dataset TableSharedGPU
                nvcc -o generated/gpu/table/shared/rf_with_table generated/gpu/table/shared/rf_with_table.cu --disable-warnings
                nvprof --quiet ./generated/gpu/table/shared/rf_with_table
                if [ "$calculateComparissons" = "true" ]; then
                    echo "------ Table GPU with shared memory Counting Comparissons"
                    jdk-20.0.2/bin/java -jar target/RandomForest-1.0.jar $dataset TableSharedCountGPU
                    nvcc -o generated/gpu/table/shared/rf_with_table_count generated/gpu/table/shared/rf_with_table_count.cu --disable-warnings
                    nvprof --quiet ./generated/gpu/table/shared/rf_with_table_count
                fi
                echo -e -n ",Table GPU with shared memory" >> results/results.csv
            fi

            if [ "$executeAll" = "true" ] || approaches_contains_element "TableRestrictGPU" "${approachesToExecute[@]}"; then
                echo "------ Table GPU with restrict memory"
                echo -e -n "\n"$trainingResults >> results/results.csv
                echo $logName"Executing with $tree trees and $depth of depth"
                jdk-20.0.2/bin/java -jar target/RandomForest-1.0.jar $dataset TableRestrictGPU
                nvcc -o generated/gpu/table/restrict/rf_with_table generated/gpu/table/restrict/rf_with_table.cu --disable-warnings
                nvprof --quiet ./generated/gpu/table/restrict/rf_with_table
                if [ "$calculateComparissons" = "true" ]; then
                    echo "------ Table GPU with restrict memory Counting Comparissons"
                    jdk-20.0.2/bin/java -jar target/RandomForest-1.0.jar $dataset TableRestrictCountGPU
                    nvcc -o generated/gpu/table/restrict/rf_with_table_count generated/gpu/table/restrict/rf_with_table_count.cu --disable-warnings
                    nvprof --quiet ./generated/gpu/table/restrict/rf_with_table_count
                fi
                echo -e -n ",Table GPU with restrict memory" >> results/results.csv
            fi

            echo -e -n "\n" >> results/results.csv

        done
    done
done

# Remover todas as linhas em branco do arquivo usando grep e salvar em um novo arquivo temporário
grep -v -e '^$' "results/results.csv" > "results/results.tmp"
    
# Mover o arquivo temporário de volta para o arquivo original
mv "results/results.tmp" "results/results.csv"