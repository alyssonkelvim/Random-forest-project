import sys



dataset_name = sys.argv[1]
dataset = open(sys.argv[2]+dataset_name+".csv",'r')
outResult = open(sys.argv[3],'r')
i = 0
correto = 0
for linha in dataset:
	i = i + 1
	colunas = linha.split(",")
	linha_outResult = outResult.readline().rstrip()
	#print(linha_outResult, colunas[-1].strip())
	if(colunas[-1].strip() == linha_outResult):
		correto = correto + 1	
		

accuracy = correto/i
strAc = str(accuracy)
resultsFile = open(sys.argv[4], 'a')
resultsFile.write( "," + strAc )
print("[Python - Accuracy Calculator]: Final Accuracy: " + strAc)