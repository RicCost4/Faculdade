import os

try:
    os.rmdir("meu_diretorio")
    print("Diretorio removido!")
except PermissionError as erro:
    print("Sem permissão para remover diretório!")
    print("Descrição", erro)
except FileNotFoundError as erro:
    print("Diretório inexistente")
    print("Descriçao", erro)
except OSError as erro:
    print("Outro erro")
    print("O diretório está vazio?")
    print("Descriçao", erro)

print("Término do Programa")
