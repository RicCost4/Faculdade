package encapsulamento;

public class Funcionario {
    private int mtrl;
    private String func;
    Departamento dpto;

    public Funcionario(int mtrl, String func, Departamento dpto){
        this.mtrl = mtrl;
        this.func = func;
        this.dpto = dpto;
    }

    public int getMtrl(){
        return(mtrl);
    }

    public void setMtrl(int mtrl){
        if(mtrl >= 0){
            this.mtrl = mtrl;
        }else {
            System.out.println("Informa matricula acima que 0");
        }
    }

    public String getFunc(){
        return(func);
    }

    public void setFunc(String func){
        if(func == ""){
            System.out.println("Informe um nome de um funcionario");
        }else {
            this.func = func;
        }
    }

    public Departamento getDpto(){
		return(dpto);
	}
	public void setDpto(Departamento dpto){
		this.dpto = dpto;
	}

    @Override
    public String toString(){
        return("Funcionario:\n[Matricula "+ this.mtrl +"-Nome: "+this.func+"] Departamento: ["+this.dpto.toString()+"]");
    }
}
