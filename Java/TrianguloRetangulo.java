// *LEMBRAR DE COLOCAR ;*
public class TrianguloRetangulo {
    
    double base, altura, hipotenusa;
    
    TrianguloRetangulo(){
        base = 7;
        altura = 5;
        hipotenusa = 10;
    }

    TrianguloRetangulo(double base, double altura, double hipotenusa){
        this.base = base;
        this.altura = altura;
        this.hipotenusa = hipotenusa;
    }

    double area(){
        return((base*altura)/2);
    }

    double comprimento(){
        return(base+altura+hipotenusa);
    }

    void desenhar(){
        String desenho="";
        for(int x=0; x<this.base; x++){
            desenho +="* ";
            System.out.println(desenho);
        }
    }
}
// *REVISAR O CODIGO*