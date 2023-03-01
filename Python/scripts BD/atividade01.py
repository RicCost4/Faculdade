import sqlite3 as conector

conexao = conector.connect("./preços.db")
cursor = conexao.cursor()


comando = '''CREATE TABLE Produtos (
                nome TEXT NOT NULL,
                preço INTEGER NOT NULL,
                PRIMARY KEY (nome)
                );'''
cursor.execute(comando)

conexao.commit()

cursor = conexao.cursor()

comando = '''INSERT INTO Produtos (nome, preço)
      VALUES (Tomate, '13.90');'''

cursor.execute(comando)

conexao.commit()

cursor.close()
conexao.close()
