import os

diretorio = input("Digite o nome do novo diretorio ha ser criado: ")

os.mkdir(diretorio)
print("Diretorio criado!")

arquivo = input("Digite o nome do novo diretorio ha ser criado: ")
arq = open(diretorio / arquivo, "wt")
arq.close()
print("Arquivo criado dentro do diretorio!")
