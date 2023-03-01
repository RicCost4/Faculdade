texto = input("Digite um texto: ")
print("\nSeu Texto:", texto)
contador = 0
lista = texto.split()
palavra = input("Digite uma palavra do seu texto: ")
for termo in lista:
    if termo == palavra:
        contador += 1
print("Palavra selecionada:", palavra, "e foi repetida", contador, "vezes")
