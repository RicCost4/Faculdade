package abstDois;

import java.util.Scanner;

public class App {
    public static void main(String[] args){
        Scanner ler = new Scanner(System.in);
        int opc;

        FormaGeometrica qua = new Quadrado();
        FormaGeometrica cir = new Circulo();

        System.out.println("escolha uma opção: \n\t0 - calcula Circulo.\n\t1 - calcular quadrado.");
        opc = ler.nextInt();

        if(opc == 0){
            System.out.println("Digite o raio do circulo.");
            cir.setRaio(ler.nextDouble());
            cir.area();
            cir.comprimento();
        }else if(opc == 1){
            System.out.println("Digite o lado do quadrado.");
            qua.setLado(ler.nextDouble());
            qua.area();
            qua.comprimento();
        }else{
            System.out.println("Opção invalida, digite novamente.");
        }
    }
}
