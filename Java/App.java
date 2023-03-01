// *LEMBRAR DE COLOCAR ;*
import java.util.Scanner;

import heranca.Cachorro;
import heranca.CachorroAdestrado;
public class App {
    public static void main(String[] args){
        Cachorro dog = new CachorroAdestrado();        

        App.imprimir(dog);
    }

        public static void imprimir(Cachorro a) {
            Scanner ler = new Scanner(System.in);
            System.out.println("Digite o nome do cachorro: ");
            a.setNome(ler.nextLine());
            System.out.println("Agora a raça do cachorro: ");
            a.setRaca(ler.nextLine());
            if (a instanceof CachorroAdestrado) {
                System.out.println("Nome : " +  a.getNome());
                System.out.println("Raca : " +  a.getRaca());
                Cachorro.latir();
                Cachorro.dormir();
                Cachorro.comer();
                CachorroAdestrado.deitar();
                CachorroAdestrado.rolar();
                CachorroAdestrado.fingirDeMorto();
    
            }else {
                System.out.println("Nome : " + ((Cachorro) a).getNome());
                System.out.println("Raca : " + ((Cachorro) a).getRaca());
                Cachorro.latir();
                Cachorro.dormir();
                Cachorro.comer();
            }
    
        }
}
// *REVISAR O CODIGO*