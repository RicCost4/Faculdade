package src.AbstT;

public class Subtracao extends Calcular {
    
    public void operacao(){
        System.out.println(this.getA()+" - "+this.getB()+" = "+(this.getA()-this.getB()));
    }
    
}
