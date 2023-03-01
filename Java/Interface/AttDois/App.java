package Interface.AttDois;

import java.util.Scanner;

public class App {
    public static void main(String[] args) {

        Scanner ler = new Scanner(System.in);

        int opc;
        int sair;

        OperacaoMatematica soma = new Soma();
        OperacaoMatematica sub = new Subtracao();
        OperacaoMatematica mult = new Multiplicacao();
        OperacaoMatematica div = new Divisao();

        do {
            System.out.println("Escolha uma operação de calculo.\n\t0 - Somar.\n\t1 - Subtrair.\n\t2 - Multiplicar.\n\t3 - Dividir.");
            opc = ler.nextInt();
            if(opc == 0){
                exibir(soma);
            }else if(opc == 1){
                exibir(sub);
            }else if(opc == 2){
                exibir(mult);
            }else if(opc == 3){
                exibir(div);
            }else{
                System.out.println("Opção Invalida, digite novamente!!!");
            }
            System.out.println("Deseja continuar: aperte 0, sair do programa aperte qualquer tecla.");
            sair = ler.nextInt();
        } while (sair == 0);
        System.out.println("Programa finalizado com sucesso......");
    }

    public static void exibir(OperacaoMatematica calculo){
        Scanner ler = new Scanner(System.in);

        int a;
        int b;
        System.out.println("Digite 2 numeros.");
        System.out.println("A: ");
        a = ler.nextInt();
        System.out.println("B: ");
        b = ler.nextInt();
        if(calculo instanceof Divisao){
            if(b == 0){
                System.out.println("Impossivel dividir por zero......");
            }else{
                System.out.println(((Divisao)calculo).calcular(a,b));
            }
        }else{
            System.out.println(calculo.calcular(a,b));
        }
    }
}
