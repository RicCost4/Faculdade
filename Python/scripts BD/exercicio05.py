import sqlite3 as conector

conexao = conector.connect("./preços.db")
cursor = conexao.cursor()

comando1 = '''update Produtos
                set preço = preço * 0.9'''
comando2 = '''select * from preços'''
cursor.execute(comando1)
cursor.execute(comando2)

for resultado in cursor.fetchall():
    print("Nome: {0:30s} Preço: {1:6.2f}".format(*resultado))

cursor.close()
conexao.close()
