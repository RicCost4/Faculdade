import os

try:
    # renomeia e substitui se ja existe um arquivo.
    os.replace("teste_alfa.txt", "teste_beta.txt")
    print("Arquivo renomeado!")
except FileNotFoundError as erro:
    print("Arquivo inexistente!")
    print("Descrição", erro)
except PermissionError as erro:
    print("Sem permissão para acessar o arquivo")
    print("Descrição", erro)
except FileExistsError as erro:
    print("Arquivo destino já existe!")
    print("Descrição", erro)

print("Término do Programa!")
