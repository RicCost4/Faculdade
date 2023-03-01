import os

try:
    os.mkdir("meu_diretorio")
    print("Diretorio criado!")
except PermissionError as erro:
    print("Sem permissão para criar diretório!")
    print("Descrição", erro)
except FileExistsError as erro:
    print("Diretório ja existe")
    print("Descriçao", erro)

print("Término do Programa")
