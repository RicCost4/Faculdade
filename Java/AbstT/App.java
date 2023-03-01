package src.AbstT;

import java.util.Scanner;

public class App {
    public static void main(String[] args){
        try (Scanner ler = new Scanner(System.in)) {
            int opc;
            double a, b;

            Calcular som = new Somar();
            Calcular sub = new Subtracao();
            Calcular mul = new Multiplicacao();
            Calcular div = new Divisao();

            System.out.println("Digite um numero: ");
            a = ler.nextDouble();
            System.out.println("Digite outro numero: ");
            b = ler.nextDouble();

            System.out.println("escolha uma operação: \n\t0 - Soma.\n\t1 - Subtração.\n\t2 - Multiplicação.\n\t3 - Divisão.");
            opc = ler.nextInt();

            if(opc == 0){
                som.setA(a);
                som.setB(b);
                som.operacao();
            }else if(opc == 1){
                sub.setA(a);
                sub.setB(b);
                sub.operacao();
            }else if(opc == 2){
                mul.setA(a);
                mul.setB(b);
                mul.operacao();
            }else if(opc == 3){
                if(b == 0){
                    System.out.println("Impossivel de dividir por zero, tente novamente :).");
                }else{
                    div.setA(a);
                    div.setB(b);
                    div.operacao();
                }
            }else{
                System.out.println("Opção invalida, digite novamente.");
            }
        }
    }
}
