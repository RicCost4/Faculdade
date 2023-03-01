// *LEMBRAR DE COLOCAR ;*

public class AttOito {
    public static void main(String[] args){

        Scanner ler = new Scanner(System.in); // instanciando e criando um objeto Scanner
        int num;
        
        System.out.printf("Instrução do – while\nExercicio 8: Escreva um programa que le numeros do teclado enquanto esses números são menores que 10."); 
        
        do{
            System.out.printf("\nInforme um numero: ");
            num = ler.nextInt(); // entrada de dados 1
        }while(num <= 10);
        System.out.printf("\nVoce informou um numero maior que 10, programa encerrado ");
    }
}
// *REVISAR O CODIGO*

