package associacao;
public class App {
    public static void main(String[] args) {
        Hora h1 = new Hora(10, 20, 30); 

        Data d1 = new Data(1, 1, 2005, h1); 

        System.out.println("Dia=" + d1.dia); 

        System.out.println("Mês=" + d1.mes); 

        System.out.println("Ano=" + d1.ano); 

        System.out.println("Hora=" + d1.hora.horas); 

        System.out.println("Min=" + d1.hora.minutos); 

        System.out.println("Seg="+ d1.hora.segundos);
    }
}
