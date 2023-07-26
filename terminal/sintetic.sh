#!/bin/bash

if ! which nvcc >/dev/null 2>&1; then
    echo $logName"Installing NVCC"
    sudo apt install nvidia-cuda-toolkit
fi
if ! dpkg -s pciutils &> /dev/null; then
    sudo apt install pciutils
fi

gpu_name=$(lspci | grep -i vga | grep -oP '\[.*?\]' | sed 's/\[\|\]//g')
if [ -z "$gpu_name" ]; then
    gpu_name=$(lspci | grep -i NVIDIA | grep -oP '\[.*?\]' | sed 's/\[\|\]//g')
fi

# Pasta de origem que será verificada
pasta="generated/gpu/sintetic/ifs/"

# Array para armazenar os nomes dos arquivos
arquivos=()

# Loop para percorrer cada arquivo na pasta de origem
for arquivo in "$pasta"/*
do
    # Verifica se o item é um arquivo (não diretório)
    if [ -f "$arquivo" ]
    then
        # Extrai apenas o nome do arquivo (sem o caminho completo) e adiciona ao array
        arquivos+=("$(basename "$arquivo")")
    fi
done
arquivoSaida="generated/gpu/sintetic/results.csv"
echo "If,Tree,Input,Size,Time,GPU" >> "$arquivoSaida" 
for arquivo in "${arquivos[@]}"; do
    IFS="_" read -ra infos <<< "$arquivo"
    method=${infos[6]}
    if [ "$method" == "WORST" ]; then
        #_RF_1IF_1TREE_1INPUT__BEST_50000000.cu
        ifs=${infos[2]/IF}
        trees=${infos[3]/TREE}
        inputs=${infos[4]/INPUT}
        
        size=${infos[7]%.cu}
        arquivoBin="$pasta${arquivo%.cu}"
        if [ -f $arquivoBin ]; then
            echo "REMOVEU $pasta${arquivo%.cu}"
            rm -rf $pasta${arquivo%.cu}
        fi
        nvcc -o "$pasta${arquivo%.cu}" "$pasta$arquivo"
        
        prof=$(nvprof "$pasta${arquivo%.cu}" 2>&1)
        time=$(echo "$prof" | grep "RF_kernel" |  awk '{print $2}')
        if [ "$time" == "activities:" ]; then
            time=$(echo "$prof" | grep "RF_kernel" |  awk '{print $4}')
        fi

        echo $arquivoSaida
        echo "$ifs,$trees,$inputs,$size,$time,$gpu_name" >> "$arquivoSaida"
        rm -rf $pasta${arquivo%.cu}
    fi
done


# Pasta de origem que será verificada
pasta="generated/gpu/sintetic/calc/"

# Array para armazenar os nomes dos arquivos
arquivos=()

# Loop para percorrer cada arquivo na pasta de origem
for arquivo in "$pasta"/*
do
    # Verifica se o item é um arquivo (não diretório)
    if [ -f "$arquivo" ]
    then
        # Extrai apenas o nome do arquivo (sem o caminho completo) e adiciona ao array
        arquivos+=("$(basename "$arquivo")")
    fi
done
for arquivo in "${arquivos[@]}"; do
    IFS="_" read -ra infos <<< "$arquivo"
    #_RF_CALC_1TREE_2LV_1INPUT_50000000
    trees=${infos[3]/TREE}
    level=${infos[4]/LV}
    inputs=${infos[5]/INPUT}
    size=${infos[6]%.cu}
    arquivoBin="$pasta${arquivo%.cu}"
    if [ -f $arquivoBin ]; then
        echo "REMOVEU $pasta${arquivo%.cu}"
        rm -rf $pasta${arquivo%.cu}
    fi
    nvcc -o "$pasta${arquivo%.cu}" "$pasta$arquivo"
    prof=$(nvprof "$pasta${arquivo%.cu}" 2>&1)
    time=$(echo "$prof" | grep "RF_kernel" |  awk '{print $2}')
    if [ "$time" == "activities:" ]; then
        time=$(echo "$prof" | grep "RF_kernel" |  awk '{print $4}')
    fi
    echo $arquivoSaida
    echo "$level,$trees,$inputs,$size,$time,$gpu_name" >> "$arquivoSaida"
    rm -rf $pasta${arquivo%.cu}
done