import os

# Para o arquivo dados1.txt
arquivo1 = open("dados1.txt")  # Caminho relativo
# Caminho absoluto
arquivo2 = open("C:/EAD/dados1.txt")

# Para o arquivo dados2.txt
arquivo3 = open("documentos/dados2.txt")  # Caminho relativo
arquivo4 = open("C:/EAD/documentos/dados2.txt")  # Caminho absoluto

print(os.path.relpath(arquivo1.name))
print(os.path.abspath(arquivo1.name))

print(arquivo1)
