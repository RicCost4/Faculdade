import java.util.Scanner; // importando a classe Scanner
// *LEMBRAR DE COLOCAR ;*

public class AttDois {
    public static void main(String[] args){

        Scanner ler = new Scanner(System.in); // instanciando e criando um objeto Scanner
        int valor1, valor2, valor3, maior = 0, meio = 0, menor = 0;
        
        System.out.printf("Instrução if\nExercicio 2: Escreva um programa que leia tres numeros inteiros do teclado, e os imprima na tela em ordem ascendente.");

        System.out.printf("\nInforme um numero: ");
        valor1 = ler.nextInt(); // entrada de dados 1 
        
        System.out.printf("Informe outro numero:\n");
        valor2 = ler.nextInt(); // entrada de dados 2

        System.out.printf("Informe outro numero:\n");
        valor3 = ler.nextInt(); // entrada de dados 3
        
        maior = valor1; // instanciando o primeiro valor

        //definindo qual é o maior ou menor de acordo com a segunda entrada de dados.
        if(valor2 == maior){
            menor = valor2;
        }else if(valor2 > maior){
            menor = maior;
            maior = valor2;
        }else{
            menor = valor2;
        }

        //definindo qual é o maior ou menor de acordo com a terceira entrada de dado.
        if(valor3 == maior){
            meio = valor3;
        } else if(valor3 == menor){
            meio = valor3;
        }else if(valor3 > maior){
            meio = maior;
            maior = valor3;
        }else if (valor3 < menor){
            meio = menor;
            menor = valor3;
        }else{
            meio = valor3;
        }
            
        
        System.out.printf("\nValores informados:\nValor1: " + valor1 + " \nValor2: " + valor2 + " \nValor3: " + valor3 + "\nMaior: " + maior + " Meio: " + meio + " Menor: " + menor); // verificação dos numeros
    }
}
// *REVISAR O CODIGO*
