package Interface.AttUm;

public class Circulo implements FormaGeometrica {
    private double raio;
    private static final double pi=3.14;

    public Circulo(double raio){
        this.raio=raio;
    }

    public double getRaio(){
        return this.raio;
    }
    public void setRaio(double raio){
        this.raio=raio;
    }

    @Override
    public double area() {
        return this.pi*this.raio*this.raio;
    }

    @Override
    public double comprimento() {
        return 2*this.pi*this.raio;
    }
    
}
