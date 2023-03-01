import sqlite3 as conector
from modelo import Marca, Veiculo


conexao = conector.connect("./meu_banco.db")
conexao.execute("PRAGMA FOREIGN_KEY = on")
cursor = conexao.cursor()

comando1 = '''INSERT INTO Marca (id, nome, sigla) VALUES (:id, :nome, :sigla);'''

marca1 = Marca(1, "Marca A", "MA")
# marca1.id = cursor.lastrowid
cursor.execute(comando1, vars(marca1))


marca2 = Marca(2, "Marca B", "MB")
# marca2.id = cursor.lastrowid
cursor.execute(comando1, vars(marca2))

comando2 = '''INSERT INTO Veiculo
                VALUES (:placa, :ano, :cor, :motor, :proprietario, :marca);'''

veiculo1 = Veiculo("AAA001", 2001, "Prata", 1.0, 100000000000099, marca1.id)
veiculo2 = Veiculo("BAA002", 2002, "Preto", 1.4, 100000000000099, marca1.id)
veiculo3 = Veiculo("CAA003", 2003, "Branco", 2.0, 200000000000099, marca1.id)
veiculo4 = Veiculo("DAA004", 2004, "Azul", 2.2, 300000000000099, marca1.id)

cursor.execute(comando2, vars(veiculo1))
cursor.execute(comando2, vars(veiculo2))
cursor.execute(comando2, vars(veiculo3))
cursor.execute(comando2, vars(veiculo4))

conexao.commit()

cursor.close()
conexao.close()
