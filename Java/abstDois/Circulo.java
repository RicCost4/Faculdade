package abstDois;

public class Circulo extends FormaGeometrica {
    private double raio;
    private double pi;

    Circulo(){
        this.raio = 1;
        this.pi = 3.14;
    }
    public double getRaio() {
        return raio;
    }
    public void setRaio(double raio) {
        this.raio = raio;
    }

    public void area(){
        System.out.println("A area do quadrado é "+this.pi*(this.raio*this.raio));
    }
    public void comprimento(){
        System.out.println("O lado do quadrado é "+2*this.pi*this.raio);
    }
}
