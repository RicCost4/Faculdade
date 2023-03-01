import sqlite3 as conector

conexao = conector.connect("./preços.db")
cursor = conexao.cursor()

preço1 = input("Digite o menor preço a listar: ")
preço2 = input("Digite o maior preço a listar: ")
cursor.execute('''select * from Produtos
                where preço >= ? and preço  <= ?''',
               (preço1, preço2))
achados = 0
for resultado in cursor.fetchall():
    print("Nome: {0:30s} Preço: {1:6.2f}".format(*resultado))
    achados += 1
    if achados == 0:
        print("Não encontrado.")
    else:
        print(achados, "produto(s) encontrado(s).")

cursor.close()
conexao.close()
