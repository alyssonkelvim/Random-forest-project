#$datasets = @("Iris", "SUSY", "Adult", "Covtype")
$datasets = @("Iris")
#$trees = @(2,5,10)
$trees = @(5)
Write-Host "-------------------------------- PowerShell Random Forest for CPU -------------------------------- "
Write-Host "Removing previous files"
Remove-Item -Path "RandomForest\out\cpu\table\results.csv" -Force -ErrorAction SilentlyContinue
foreach ($i in $trees) {
    foreach ($j in $trees) {
        foreach ($dataset in $datasets) {
            Write-Host "---------------------- Training $dataset ---------------------- "
            & Python "RandomForest\python\tree_generator.py" "$dataset" "C:\Users\akcsa\OneDrive\Documentos\Projetos\Random Forest\randomforest\RandomForest\assets\datasets\\" "$i" "$j"
            Set-Location -Path "RandomForest"
            Write-Host "Initializating Java"
            & "C:\Program Files\Java\jdk-20\bin\java.exe" "-XX:+ShowCodeDetailsInExceptionMessages" "-cp" "C:\Users\akcsa\OneDrive\Documentos\Projetos\Random Forest\randomforest\RandomForest\target\classes" "com.mycompany.randomforest.Main" $dataset
            Write-Host "Finished Java"
            Set-Location -Path "..\.."
            Remove-Item -Path "RandomForest\out\cpu\table\out_rf_if_cpu.csv" -Force -ErrorAction SilentlyContinue
            Set-Location -Path "randomforest\RandomForest\out\cpu\table\"
            gcc "rf_with_table.c" -o "rf_with_table.exe"
            ./rf_with_table.exe
            & Python 'C:\Users\akcsa\OneDrive\Documentos\Projetos\Random Forest\randomforest\RandomForest\python\accuracyCalculator.py' "$dataset" "C:\Users\akcsa\OneDrive\Documentos\Projetos\Random Forest\randomforest\RandomForest\assets\datasets\\"
            Set-Location -Path "..\..\..\.."
        }
    }
}
Write-Host "---------------------- FINISHED ---------------------- "
