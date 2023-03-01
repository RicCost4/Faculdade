import sqlite3
from contextlib import closing

with sqlite3.connect("./preços.db") as conexao:
    with closing(conexao.cursor()) as cursor:
        cursor.execute('''SELECT * FROM Produtos;''')
        for resultado in cursor.fetchall():
            print("Nome: {0:10s} Preço: {1:6.2f}".format(*resultado))
