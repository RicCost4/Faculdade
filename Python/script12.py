print("Iterando sobre o arquivo")

with open("dados1.txt", "r") as arquivo:
    for linha in arquivo:
        print(linha)
    print("Fim do arquivo", arquivo.name)
