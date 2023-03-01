arquivo = open("teste.txt", "r")

conteudo = arquivo.readlines()

print("Tipo do conteúdo:", type(conteudo))

print("Conteúdo retornado pelo readlines:")
print(repr(conteudo))

arquivo.close()
