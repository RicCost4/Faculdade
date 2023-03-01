package heranca;

public class Cachorro {
    private String nome;
    private String raca;

    public Cachorro() {
        this.nome = "";
        this.raca = "";
    }

    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
        if(nome == ""){
            System.out.println("Nome Invalido, digite outro.");
        }
    }
    public String getRaca() {
        return raca;
    }
    public void setRaca(String raca) {
        this.raca = raca;
        if(raca == ""){
            System.out.println("Nome Invalido, digite outro.");
        }
    }

    public static void latir(){
        System.out.println("**esta latindo!!**");
    }

    public static void comer(){
        System.out.println("**Cachorro comendo!!**");
    }

    public static void dormir(){
        System.out.println("**Cachorro durmindo!!**");
    }
}
