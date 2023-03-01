package encapsulamento;

public class Departamento {
    private int codigo;
    private String nome;

    public Departamento(int codigo, String nome){
        this.codigo = codigo;
        this.nome = nome;
    }

    public int getCodico(){
        return(codigo);
    }

    public void setCodigo(int codigo){
        if(codigo >= 0){
            this.codigo = codigo;
        }else {
            System.out.println("Informa codigo acima que 0");
        }
    }

    public String getNome(){
        return(nome);
    }

    public void setNome(String nome){
        if(nome == ""){
            System.out.println("Informe um nome");
        }else {
            this.nome = nome;
        }
    }

    @Override
    public String toString(){
        return("Codigo: "+ this.codigo +" - Nome: "+this.nome);
    }
}
