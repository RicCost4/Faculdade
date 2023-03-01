package encapsulamento;

public class ConversaoDeUnidadesDeTempo {
    public static final int seg = 60;
	
	public static int minuto(int seg){
		return(seg*60);
	}
	public static int hora(int min){
		return(min*60);
	}
	public static int dia(int hora){
		return(hora*24);
	}

    public static int semana(int dia){
		return(dia*7);
	}

	public static int mes(int dia){
		return(dia*30);
	}
	public static int ano(int dia){
		return(dia*365);
	}
}
