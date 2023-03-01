package associacao;

public class Data {
    int dia, mes, ano; 
    Hora hora; /* ASSOCIAÇÃO */
    Data(int d, int m, int a, Hora h) { 
        this.dia = d;        
        this.mes = m; 
        this.ano = a; 
        this.hora = h; 
    }
}
