import sqlite3
from contextlib import closing

with sqlite3.connect("preços.db") as conexao:
    with closing(conexao.cursor()) as cursor:
        while True:
            nome = input("Nome do produto a pesquisar [Enter sai]: ")
            if not nome:
                break
            cursor.execute(
                '''select * from Produtos where nome = ?''', (nome,))
            achados = 0
            for resultado in cursor.fetchall():
                print("Nome: {0:30s} Preço: {1:6.2f}".format(*resultado))
                achados += 1
            if achados == 0:
                print("Não encontrado.")
            else:
                print("{} produto(s) encontrado(s).".format(achados))
