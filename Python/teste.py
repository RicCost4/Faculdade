import os

arq = open("teste.txt")

print(os.path.realpath(arq.name))

print(arq)

print("Nome do arquivo:", arq.name)
print("Modo do arquivo:", arq.mode)
print("Arquivo fechado?", arq.closed)

arq.close()

print("Arquivo fechado?", arq.closed)
