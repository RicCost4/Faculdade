import sqlite3 as conector

conexao = conector.connect("./preços.db")
cursor = conexao.cursor()

comando = '''SELECT * FROM Produtos;'''
cursor.execute(comando)

dados = cursor.fetchall()

for registro in dados:
    print("Conteúdo:", registro)

cursor.close()
conexao.close()
