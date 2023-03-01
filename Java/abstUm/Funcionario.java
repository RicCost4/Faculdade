package abstUm;

public abstract class Funcionario {
    private String nome;
    private double salario;

    public Funcionario(){
        this.nome="";
        this.salario=0;
    }
    public String getNome(){
        return nome;
    }
    public void setNome(String nome){
        this.nome=nome;
    }

    public double getSalario(){
        return salario;
    }
    public void setSalario(double salario){
        this.salario=salario;
    }

    public abstract void aumentoSalario();
}
