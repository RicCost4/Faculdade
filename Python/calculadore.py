x = 0
while x == 0:
    print("Vamos Calcular...")

    n1 = int(input("Digite um numero: "))
    n2 = int(input("Digite outro numero: "))
    n3 = int(input("Digite outro numero: "))
    if(n1 == 0 or n2 == 0 or n3 == 0):
        opc = int(
            input("Escolha:\n\t|1 - Somar\n\t|2 - Subtrair\n\t|3 - Multiplicar\n: "))
        if(opc == 1):
            print("Numeros escolhidos:\nX -", n1, "\nY -", n2, "\nZ -", n3)
            esc = int(input("Escolha:\n1-| X+Y |\t2-| X+Z |\t3-| Y+Z |\n: "))
            if(esc == 1):
                soma = n1+n2
                media = soma/3
                print("A soma dos numeros são", str(
                    soma), "e sua media é", str(media))
            elif(esc == 2):
                soma = n1+n3
                media = soma/3
                print("A soma dos numeros são", str(
                    soma), "e sua media é", str(media))
            elif(esc == 3):
                soma = n2+n3
                media = soma/3
                print("A soma dos numeros são", str(
                    soma), "e sua media é", str(media))
            else:
                print("Opção errada, retorne ao programa...")
        elif(opc == 2):
            print("Numeros escolhidos:\nX -", n1, "\nY -", n2, "\nZ -", n3)
            esc = int(input(
                "Escolha:\n1-| X-Y |\t2-| Y-X |\t3-| X-Z |\t4-| Z-X |\t5-| Y-Z |\t6-| Z-Y |\n: "))
            if(esc == 1):
                sub = n1-n2
                media = (n1+n2+n3)/n3
                print("A subtração dos numeros são", str(
                    sub), "e sua media é", str(media))
            elif(esc == 2):
                sub = n2-n1
                media = (n1+n2+n3)/n3
                print("A subtração dos numeros são", str(
                    sub), "e sua media é", str(media))
            elif(esc == 3):
                sub = n1-n3
                media = (n1+n2+n3)/n3
                print("A subtração dos numeros são", str(
                    sub), "e sua media é", str(media))
            elif(esc == 4):
                sub = n3-n1
                media = (n1+n2+n3)/n3
                print("A subtração dos numeros são", str(
                    sub), "e sua media é", str(media))
            elif(esc == 5):
                sub = n2-n3
                media = (n1+n2+n3)/n3
                print("A subtração dos numeros são", str(
                    sub), "e sua media é", str(media))
            elif(esc == 6):
                sub = n3-n2
                media = (n1+n2+n3)/n3
                print("A subtração dos numeros são", str(
                    sub), "e sua media é", str(media))
            else:
                print("Opção errada, retorne ao programa...")
        elif(opc == 3):
            print("Numeros escolhidos:\nX -", n1, "\nY -", n2, "\nZ -", n3)
            esc = int(input("Escolha:\n1-| X*Y |\t2-| X*Z |\t3-| Y*Z |\n: "))
            if(esc == 1):
                mult = n1*n2
                media = (n1+n2+n3)/n3
                print("A multiplicaçã dos numeros são", str(
                    mult), "e sua media é", str(media))
            elif(esc == 2):
                mult = n1*n3
                media = (n1+n2+n3)/n3
                print("A multiplicaçã dos numeros são", str(
                    mult), "e sua media é", str(media))
            elif(esc == 3):
                mult = n2*n3
                media = (n1+n2+n3)/n3
                print("A multiplicaçã dos numeros são", str(
                    mult), "e sua media é", str(media))
            else:
                print("Opção errada, retorne ao programa...")
        else:
            print("Opção errada, retorne ao programa...")
        x = int(
            input("Fim do Programa, deseja conyinuar?\n(0 - continuar e 1 - encerrar\n: "))
    else:
        opc = int(input(
            "Escolha:\n\t|1 - Somar\n\t|2 - Subtrair\n\t|3 - Multiplicar\n\t|4 - Divisão\n: "))
        if(opc == 1):
            print("Numeros escolhidos:\nX -", n1, "\nY -", n2, "\nZ -", n3)
            esc = int(input("Escolha:\n1-| X+Y |\t2-| X+Z |\t3-| Y+Z |\n: "))
            if(esc == 1):
                soma = n1+n2
                media = soma/3
                print("A soma dos numeros são", str(
                    soma), "e sua media é", str(media))
            elif(esc == 2):
                soma = n1+n3
                media = soma/3
                print("A soma dos numeros são", str(
                    soma), "e sua media é", str(media))
            elif(esc == 3):
                soma = n2+n3
                media = soma/3
                print("A soma dos numeros são", str(
                    soma), "e sua media é", str(media))
            else:
                print("Opção errada, retorne ao programa...")
        elif(opc == 2):
            print("Numeros escolhidos:\nX -", n1, "\nY -", n2, "\nZ -", n3)
            esc = int(input(
                "Escolha:\n1-| X-Y |\t2-| Y-X |\t3-| X-Z |\t4-| Z-X |\t5-| Y-Z |\t6-| Z-Y |\n: "))
            if(esc == 1):
                sub = n1-n2
                media = (n1+n2+n3)/n3
                print("A subtração dos numeros são", str(
                    sub), "e sua media é", str(media))
            elif(esc == 2):
                sub = n2-n1
                media = (n1+n2+n3)/n3
                print("A subtração dos numeros são", str(
                    sub), "e sua media é", str(media))
            elif(esc == 3):
                sub = n1-n3
                media = (n1+n2+n3)/n3
                print("A subtração dos numeros são", str(
                    sub), "e sua media é", str(media))
            elif(esc == 4):
                sub = n3-n1
                media = (n1+n2+n3)/n3
                print("A subtração dos numeros são", str(
                    sub), "e sua media é", str(media))
            elif(esc == 5):
                sub = n2-n3
                media = (n1+n2+n3)/n3
                print("A subtração dos numeros são", str(
                    sub), "e sua media é", str(media))
            elif(esc == 6):
                sub = n3-n2
                media = (n1+n2+n3)/n3
                print("A subtração dos numeros são", str(
                    sub), "e sua media é", str(media))
            else:
                print("Opção errada, retorne ao programa...")
        elif(opc == 3):
            print("Numeros escolhidos:\nX -", n1, "\nY -", n2, "\nZ -", n3)
            esc = int(input("Escolha:\n1-| X*Y |\t2-| X*Z |\t3-| Y*Z |\n: "))
            if(esc == 1):
                mult = n1*n2
                media = (n1+n2+n3)/n3
                print("A multiplicação dos numeros são", str(
                    mult), "e sua media é", str(media))
            elif(esc == 2):
                mult = n1*n3
                media = (n1+n2+n3)/n3
                print("A multiplicaçã dos numeros são", str(
                    mult), "e sua media é", str(media))
            elif(esc == 3):
                mult = n2*n3
                media = (n1+n2+n3)/n3
                print("A multiplicaçã dos numeros são", str(
                    mult), "e sua media é", str(media))
            else:
                print("Opção errada, retorne ao programa...")
        elif(opc == 4):
            print("Numeros escolhidos:\nX -", n1, "\nY -", n2, "\nZ -", n3)
            esc = int(input(
                "Escolha:\n1-| X/Y |\t2-| Y/X |\t3-| X/Z |\t4-| Z/X |\t5-| Y/Z |\t6-| Z/Y |\n: "))
            if(esc == 1):
                div = n1/n2
                media = (n1+n2+n3)/n3
                print("A subtração dos numeros são", str(
                    div), "e sua media é", str(media))
            elif(esc == 2):
                div = n2/n1
                media = (n1+n2+n3)/n3
                print("A subtração dos numeros são", str(
                    div), "e sua media é", str(media))
            elif(esc == 3):
                div = n1/n3
                media = (n1+n2+n3)/n3
                print("A subtração dos numeros são", str(
                    div), "e sua media é", str(media))
            elif(esc == 4):
                div = n3/n1
                media = (n1+n2+n3)/n3
                print("A subtração dos numeros são", str(
                    div), "e sua media é", str(media))
            elif(esc == 5):
                div = n2/n3
                media = (n1+n2+n3)/n3
                print("A subtração dos numeros são", str(
                    div), "e sua media é", str(media))
            elif(esc == 6):
                div = n3/n2
                media = (n1+n2+n3)/n3
                print("A subtração dos numeros são", str(
                    div), "e sua media é", str(media))
            else:
                print("Opção errada, retorne ao programa...")
        else:
            print("Opção errada, retorne ao programa...")
        x = int(
            input("Fim do Programa, deseja conyinuar?\n(0 - continuar e 1 - encerrar\n: "))
