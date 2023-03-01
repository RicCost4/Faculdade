package abstDois;

public class Quadrado extends FormaGeometrica {
    private double lado;

    Quadrado(){
        this.lado = 0;
    }

    public double getLado() {
        return lado;
    }
    public void setLado(double lado) {
        this.lado = lado;
    }
    
    public void area(){
        System.out.println("A area do quadrado é "+this.lado*this.lado);
    }
    public void comprimento(){
        System.out.println("O lado do quadrado é "+this.lado*4);
    }
}
