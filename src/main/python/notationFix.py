import sys

def convert_to_decimal(scientific_notation):
    try:
        # Transforma a string em um número de ponto flutuante
        number = float(scientific_notation)
        return number
    except ValueError:
        return None

dataset_name = sys.argv[1]
dataset = open(dataset_name,'r')
clean_dataset = open(dataset_name + '_clean', 'w')
i = 0
first = True
for linha in dataset:
    if(first):
        first = False
    else:
        colunas = linha.split(",")
        decimal_values = [f"{convert_to_decimal(value.strip()):.6f}" for value in colunas]
        # Verifica se o último valor é igual a 1.0 ou 0.0 e atribui a string correspondente
        last_value = decimal_values[-1]
        if last_value == '1.000000':
            last_value = '1'
        elif last_value == '0.000000':
            last_value = '0'
        
        decimal_values[-1] = last_value
        clean_dataset.write(','.join(decimal_values)+"\n")
clean_dataset.close()


