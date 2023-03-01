package encapsulamento;

public class ConversaoDeUnidadesDeArea {
    public static double  peQ = 1;
    public static double metQ = 1;
    public static double acre = 1;
    public static double milha = 1;

    public static double pes(double pes){
        return(pes*929);
    }

    public static double metro(double metro, double pes){
        return(metro+(10.76*pes));
    }

    public static double acre(double acre, double pes){
        return(acre+(43.560*pes));
    }

    public static double milha(double milha, double acre){
        return(milha+(640*acre));
    }

    public static void valores(){
        System.out.println("Convensão\n\tPés: "+pes(peQ)+"cm.\n\tMetro: "+metro(metQ, peQ)+" pés.\n\tAcre: "+acre(acre, peQ)+" pés.\n\tMilha: "+milha(milha, acre)+" acres.");
    }
}
