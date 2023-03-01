package src.AbstT;

public abstract class Calcular {
    private double a;
    private double b;

    public double getA(){
        return this.a;
    }
    public void setA(double a){
        this.a=a;
    }

    public double getB(){
        return this.b;
    }
    public void setB(double b){
        this.b=b;
    }

    public abstract void operacao();
}
