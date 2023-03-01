import java.util.Scanner; // importando a classe Scanner
// *LEMBRAR DE COLOCAR ;*

public class AttTres {
    public static void main(String[] args){

        Scanner ler = new Scanner(System.in); // instanciando e criando um objeto Scanner
        int valor1, valor2, maior ,menor;
        
        System.out.printf("Operador ?\nExercicio 3: Escreva um programa que leia dois numeros inteiros do teclado, e os imprima na tela em ordem ascendente.");

        System.out.printf("\nInforme um numero: ");
        valor1 = ler.nextInt(); // entrada de dados 1 
        
        System.out.printf("Informe outro numero:");
        valor2 = ler.nextInt(); // entrada de dados 2

        
        
        maior = (valor1 > valor2) ? valor1 : valor2;
        menor = (valor1 < valor2) ? valor1 : valor2;

            
        
        System.out.printf("\nValores informados:\nValor1: " + valor1 + " \nValor2: " + valor2 + "\nMaior: " + maior + " Menor: " + menor); // verificação dos numeros
    }
}
// *REVISAR O CODIGO*
