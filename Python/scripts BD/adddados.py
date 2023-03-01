import sqlite3 as conector

conexao = conector.connect("./preços.db")
cursor = conexao.cursor()

comando = '''INSERT INTO Produtos (nome, preço)
      VALUES ('Pera', '7.90');'''

cursor.execute(comando)

conexao.commit()

cursor.close()
conexao.close()
