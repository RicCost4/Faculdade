import os
import errno

try:
    os.rmdir("meu_diretorio")
    print("Diretorio removido!")
except OSError as erro:
    print(erro.errno)
    if erro.errno == errno.ENOTEMPTY:
        print("O diretório não está vazio")
    else:

        print("Erro inesperado!")
    print("Descrição:", erro)


print("Término do Programa")
