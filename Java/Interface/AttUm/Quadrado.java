package Interface.AttUm;

public class Quadrado implements FormaGeometrica {
    private double lado;

    public Quadrado(double lado){
        this.lado=lado;
    }

    public double getLado(){
        return this.lado;
    }
    public void setLado(double lado){
        this.lado=lado;
    }

    @Override
    public double area() {
        return this.lado*this.lado;
    }

    @Override
    public double comprimento() {
        return this.lado*4;
    }
    
}
