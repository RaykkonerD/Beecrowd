// Validação de Nota

import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) {
 
         Scanner input = new Scanner(System.in);
         int notasValidas = 0;
         double media = 0;
         
         do {
             double nota = input.nextDouble();
             
             if(nota >= 0 && nota <= 10){
                 notasValidas++;
                 media += nota;
             } else {
                 System.out.println("nota invalida");
             }
         } while(notasValidas < 2);
         
         media = media/2.0;
         
         System.out.printf("media = %.2f%n", media);
    }
}