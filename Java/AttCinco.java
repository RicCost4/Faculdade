import java.util.Scanner; // importando a classe Scanner
// *LEMBRAR DE COLOCAR ;*

public class AttCinco {
    public static void main(String[] args){

        Scanner ler = new Scanner(System.in); // instanciando e criando um objeto Scanner
        int valor1, valor2;
        String oper;
        
        System.out.printf("Instrução switch\nExercicio 5: Escrever um programa que receba 2 numeros e um caractere operador (+, -, *, /), realize a operação determinada e imprima na tela o resultado");

        System.out.printf("\nInforme um numero: ");
        valor1 = ler.nextInt(); // entrada de dados 1 
        
        System.out.printf("Informe outro numero:");
        valor2 = ler.nextInt(); // entrada de dados 2

        System.out.printf(valor1 + " e " + valor2 + "\nQual operacao quer fazer:\n\t\t + , - , * , / \n: ");
        oper = ler.next(); // entrada dos caracteres

        switch (oper){
            case "+":
            System.out.printf("\nA soma de "+valor1+" e "+valor2+" he "+(valor1+valor2)); // retorno dos dados
            break;
            case "-":
            System.out.printf("\nA subtracao de "+valor1+" e "+valor2+" he "+(valor1-valor2)); // retorno dos dados
            break;
            case "*":
            System.out.printf("\nA multiplicacao de "+valor1+" e "+valor2+" he "+(valor1*valor2)); // retorno dos dados
            break;
            case "/":
            if(valor2==0){
                System.out.printf("\nImpossivel realizar divisão por zero, tente novamente!!!!!!"); // retorno dos dados
            }else{
                if(valor2%2 == 0){
                    System.out.printf("\nA divisao de "+valor1+" e "+valor2+" he "+(valor1/valor2)); // retorno dos dados
                }else{
                    System.out.printf("\nA divisao de "+valor1+" e "+valor2+" he "+((double)valor1/valor2)); // retorno dos dados
                }
            }
            break;
        }
        
    }
}
// *REVISAR O CODIGO*

