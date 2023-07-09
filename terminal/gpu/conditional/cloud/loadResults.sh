#!/bin/bash
cd RandomForest/out/gpu/conditional/
rm results.csv
cd ../../../../
for i in  5 10 30 50;
do
    for j in  5 10 30 50;
    do
#        for dataset in Iris Adult Covtype HeartDisease Hospital Spambase SUSY;
        for dataset in Iris;
        do
            echo "---------------------- Training $dataset ---------------------- "
            python3 RandomForest/python/tree_generator.py "$dataset" "/home/azureuser/cloudfiles/code/randomforest/RandomForest/assets/datasets/" $i $j
            cd RandomForest
            #/home/azureuser/cloudfiles/code/apache-maven-3.8.8/bin/mvn clean install
            /home/azureuser/cloudfiles/code/jdk-20.0.1/bin/java -Dfile.encoding=UTF-8 -classpath /home/azureuser/cloudfiles/code/randomforest/RandomForest/target/classes com.mycompany.randomforest.Main $dataset
            #cd ..
            #cd RandomForest/out/gpu/conditional/
            #rm rf.cu
            #rm rf
            #rm out_rf_with_if.csv
            #cat functions.cu rf_with_if.cu main.cu > rf.cu
            #nvcc -Xptxas -v rf.cu
            #nvcc -ptx rf.cu
            #nvcc -o rf rf.cu
            #nvprof ./rf
            #python3 ../../../../RandomForest/python/accuracyCalculator.py "$dataset" "/home/azureuser/cloudfiles/code/randomforest/RandomForest/assets/datasets/" 
            #cd ../../../../
            break
        done
        break
    done
    break
done
echo "---------------------- FINISHED ---------------------- "