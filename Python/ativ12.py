str1 = input("Digite uma frase: ")
str2 = input("Digite outra frase: ")

print("A frase digita é", str1, "e seu tamanho é", len(str1))
print("A outra frase digita é", str2, "e seu tamanho é", len(str2))

if len(str1) == len(str2):
    print("As duas frases possuem o mesmo tamanho")
else:
    print("As frases não possuem o mesmo tamanho")

'''if ord(str1) == ord(str2):
    print("As frases são iguais")
else:
    print("As frases não são iguais")'''
