import encapsulamento.Departamento;
import encapsulamento.Funcionario;


public class AppUm {
    public static void main(String[] args) {
        Departamento dept = new Departamento(55, "Richard");
        Funcionario fun = new Funcionario(001, "Carlos", dept);

        System.out.printf("Controle do Departamento");
        System.out.printf(fun.toString());

    }
}
