import java.util.Scanner; // importando a classe Scanner
// *LEMBRAR DE COLOCAR ;*

public class AttQuatro {
    public static void main(String[] args){

        Scanner ler = new Scanner(System.in); // instanciando e criando um objeto Scanner
        int valor, abs;
        
        System.out.printf("Operador ?\nExercicio 4: Escreva um programa que determina o valor absoluto de um numero inteiro lido do teclado.");

        System.out.printf("\nInforme um numero: ");
        valor = ler.nextInt(); // entrada de dados 1 
        
        abs = (valor <= 0) ? -(valor) : valor;

            
        
        System.out.printf("\nValores informados:\nValor digitado: " + valor + "\nseu valor absoluto: " + abs); // verificação dos numeros
    }
}
