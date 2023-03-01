package abstUm;

import java.util.Scanner;

public class Apps {
    public static void main(String[] args){
        Scanner ler = new Scanner(System.in);
        int opc;

        Funcionario ger = new Gerente();
        Funcionario pro = new Programador();

        System.out.println("Cadastro.");
        System.out.println("\nInforme os dados do Gerente: \nNome: ");
        ger.setNome(ler.next());
        System.out.println("Salario: ");
        ger.setSalario(ler.nextInt());

        System.out.println("\nInforme os dados do Programador: \nNome: ");
        pro.setNome(ler.next());
        System.out.println("Salario: ");
        pro.setSalario(ler.nextInt());

        System.out.println("Informa a opção: \n\t0 - Imprimir os dados.\n\t1 - Aumentar os salarios.");
        opc = ler.nextInt();

        if(opc == 0){
            System.out.println("Dados Cadastrados: \nGerente: "+ger.getNome()+"\tSalario: R$"+ger.getSalario()+"\nProgramador: "+pro.getNome()+"\tSalario: R$"+pro.getSalario());
        }else if(opc == 1){
            ger.aumentoSalario();
            pro.aumentoSalario();
            System.out.println("Voce aumentou os salarios de "+ger.getNome()+" em 10%, salario atual - "+ger.getSalario()+" e do "+pro.getNome()+" em 20%, salario atual - R$"+pro.getSalario());
        }else{
            System.out.println("Opção Invalida, inicie o programa novamente...");
        }
    }
}
