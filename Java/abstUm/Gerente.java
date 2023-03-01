package abstUm;

public class Gerente extends Funcionario {
    public Gerente(){
        super();
    }
    public void aumentoSalario(){
        //aumentar 10%
        this.setSalario(this.getSalario()*1.1);
    }
}
