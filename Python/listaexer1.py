arquivo = input('Nome do arquivo a ser aberto: ')

with open(arquivo) as myfile:
    count = sum(1 for line in myfile if line.rstrip('\n'))

print("Seu arquivo possue", count, "linhas com texto")
