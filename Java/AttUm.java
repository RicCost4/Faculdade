import java.util.Scanner; // importando a classe Scanner
// *LEMBRAR DE COLOCAR ;*

public class AttUm {
    public static void main(String[] args){

        Scanner ler = new Scanner(System.in); // instanciando e criando um objeto Scanner
        int valor1, valor2;
        
        System.out.printf("Instrução if\nExercicio 1: Escrever um programa que receba 2 números como parâmetros, realize e imprima a divisão do primeiro pelo segundo. OBS: Deve-se evitar divisão por zero.");

        System.out.printf("Informe um numero:\n");
        valor1 = ler.nextInt(); // entrada de dados 1 

        System.out.printf("Informe outro numero:\n");
        valor2 = ler.nextInt(); // entrada de dados 1 

        //System.out.printf("Valores informados:\nX= " + valor1 + "\nY= " + valor2); // verificação dos numeros

        if (valor2 == 0){
            System.out.printf("O numero Y não e divisivel por 0.\nReinicie o programa!!!");
        }else{
            if(valor1%2 != 0){
                System.out.printf("\nA Divisao de X: " + valor1 + " por Y: " + valor2 + " eh " + ((double)valor1 / valor2));
            }else{
                System.out.printf("\nA Divisao de X: " + valor1 + " por Y: " + valor2 + " eh " + (valor1 / valor2));
            }
        }
    }
}
// *REVISAR O CODIGO*