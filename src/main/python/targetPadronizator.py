import sys

dataset_name = sys.argv[1]
dataset = open('/home/alysson/Documentos/workspace/RandomForest/assets/datasets/'+dataset_name+".csv",'r')
clean_dataset = open(dataset_name + '_clean', 'w')
i = 0
dic = dict()
first = True
for linha in dataset:
	
	if(first):
		first = False
		clean_dataset.write(linha)
	else:
		colunas = linha.split(",")
		valor = colunas[-1].strip()
		if valor in dic:
			colunas[-1] = dic[valor]
		else:
			dic[valor] = str(i)
			i = i + 1
			colunas[-1] = dic[valor]

		clean_dataset.write(','.join(colunas)+"\n")
clean_dataset.close()
