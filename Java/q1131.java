// Grenais 

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
 
         Scanner input = new Scanner(System.in);
         int novoGrenal = 1;
         int nGrenais = 0;
         int vitsInter = 0;
         int vitsGremio = 0;
         int empates = 0;
         
         while(novoGrenal != 2){
             int golsInter = input.nextInt();
             int golsGremio = input.nextInt();
             
             if(golsInter > golsGremio){
                 vitsInter++;
             } else if(golsInter < golsGremio){
                 vitsGremio++;
             } else {
                 empates++;
             }
             
             nGrenais++;
             System.out.println("Novo grenal (1-sim 2-nao)");
             novoGrenal = input.nextInt();
         }
         
         
         System.out.printf("%d grenais%n", nGrenais);
         System.out.printf("Inter:%d%n", vitsInter);
         System.out.printf("Gremio:%d%n", vitsGremio);
         System.out.printf("Empates:%d%n", empates);
         if(vitsInter == vitsGremio){
             System.out.println("Nao houve vencedor");
         } else if(vitsInter > vitsGremio){
             System.out.println("Inter venceu mais");
         } else {
             System.out.println("Gremio venceu mais");
         }
             
    }
}