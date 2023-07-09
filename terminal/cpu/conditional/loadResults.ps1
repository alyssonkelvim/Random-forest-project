#$datasets = @("Iris", "SUSY", "Adult", "Covtype")
$datasets = @("Iris", "Adult")
#$trees = @(2,5,10)
$trees = @(10)
$depth = @(10)
$log = "[PowerShell]:"
Write-Host "-------------------------------- PowerShell Random Forest for CPU -------------------------------- "
Write-Host $log "Building Java Project with Maven"
& tools\apache-maven-3.8.8\bin\mvn clean install -q
Write-Host $log "Removing previous files"
Remove-Item -Path "generated\cpu\conditional\results.csv" -Force -ErrorAction SilentlyContinue
"Dataset,Trees,Depth,Time,Accuracy" | Out-File -FilePath "generated\cpu\conditional\results.csv" -Encoding UTF8
foreach ($i in $trees) {
    foreach ($j in $depth) {
        foreach ($dataset in $datasets) {
            Write-Host "---------------------- Training $dataset ---------------------- "
            & Python "src\main\python\tree_generator.py" "$dataset" $i $j "generated\cpu\conditional\results.csv"
            Write-Host $log "Starting Java Project to generate C code"
            & "C:\Program Files\Java\jdk-20\bin\java.exe" -jar target\RandomForest-1.0-SNAPSHOT.jar $dataset ConditionalCPU
            Write-Host $log "Removing previous results"
            Remove-Item -Path "generated\cpu\conditional\out_rf_if_cpu.csv" -Force -ErrorAction SilentlyContinue
            gcc "generated\cpu\conditional\rf_with_if.c" -o "generated\cpu\conditional\rf_with_if.exe"
            ./generated\cpu\conditional\rf_with_if.exe
            & Python 'src\main\python\accuracyCalculator.py' "$dataset" "assets\datasets\\" "generated\cpu\conditional\out_rf_if_cpu.csv" "generated\cpu\conditional\results.csv"
            
        }
    }
}
Write-Host "---------------------- FINISHED ---------------------- "
