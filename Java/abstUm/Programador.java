package abstUm;

public class Programador extends Funcionario {
    Programador(){
        super();
    }
    public void aumentoSalario(){
        //aumentar 20%
        this.setSalario(this.getSalario()*1.2);
    }
}
