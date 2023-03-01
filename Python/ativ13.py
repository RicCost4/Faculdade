palavra = input("Digite uma palavra: ")
palavra = palavra.lower()
inver = palavra[::-1]

if palavra == inver:
    print(palavra, "é um Palindromo")
else:
    print(palavra, "não é um Palindrome")
