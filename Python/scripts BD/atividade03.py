import sqlite3 as conector

conexao = conector.connect("./preços.db")
cursor = conexao.cursor()

while True:
    nome = input("Nome do produto a pesquisar [em branco sai]: ")
    if not nome:
        break
    cursor.execute('''select * from Produtos where nome = ?''', (nome,))
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
