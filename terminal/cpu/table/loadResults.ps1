#$datasets = @("Iris", "SUSY", "Adult", "Covtype")
$datasets = @("Adult")
#$trees = @(2,5,10)
$trees = @(10)
$depth = @(10)
$log = "[PowerShell]:"
Write-Host "-------------------------------- PowerShell Random Forest for CPU -------------------------------- "
Write-Host $log "Building Java Project with Maven"
& tools\apache-maven-3.8.8\bin\mvn clean install -q
Write-Host $log "Removing previous files"
Remove-Item -Path "generated\cpu\table\results.csv" -Force -ErrorAction SilentlyContinue
"Dataset,Trees,Depth,Time,Accuracy" | Out-File -FilePath "generated\cpu\table\results.csv" -Encoding UTF8
foreach ($i in $trees) {
    foreach ($j in $depth) {
        foreach ($dataset in $datasets) {
            Write-Host "---------------------- Training $dataset ---------------------- "
            & Python "src\main\python\tree_generator.py" "$dataset" $i $j "generated\cpu\table\results.csv"
            Write-Host $log "Starting Java Project to generate C code"
            & "C:\Program Files\Java\jdk-20\bin\java.exe" -jar target\RandomForest-1.0-SNAPSHOT.jar $dataset TableCPU
            Write-Host $log "Removing previous outputs"
            Remove-Item -Path "generated\cpu\table\out_rf_table_cpu.csv" -Force -ErrorAction SilentlyContinue
            gcc "generated\cpu\table\rf_with_table.c" -o "generated\cpu\table\rf_with_table.exe"
            ./generated\cpu\table\rf_with_table.exe
            & Python 'src\main\python\accuracyCalculator.py' "$dataset" "assets\datasets\\" "generated\cpu\table\out_rf_table_cpu.csv" "generated\cpu\table\results.csv"
            
        }
    }
}
Write-Host "---------------------- FINISHED ---------------------- "
