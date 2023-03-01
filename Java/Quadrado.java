public class Quadrado {
    double lado;

    Quadrado(){
        this.lado = 2;
    }

    Quadrado(double lado){
        this.lado = lado;
    }

    double area(){
        return(this.lado*this.lado);
    }

    double comprimento(){
        return(this.lado);
    }
    void desenhar(){
        String desenho="";
        for(int x=0; x<this.lado; x++){
            desenho +="* ";
        }
        for(int y=0; y<this.lado; y++){
            System.out.println(desenho);
        }
    }
}
