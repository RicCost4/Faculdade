package Interface.AttUm;

public class App{
    public static void main(String[] args) {
        FormaGeometrica c = new Circulo(5);
        FormaGeometrica q = new Quadrado(4);

        exibir(c);
        exibir(q);
    }

    public static void exibir(FormaGeometrica forma){
        System.out.println(forma.area());
        System.out.println(forma.comprimento());
    }
}