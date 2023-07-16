// Tempo de Jogo com Minutos

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
 
       Scanner input = new Scanner(System.in);
       int h1 = input.nextInt();
       int m1 = input.nextInt();
       int h2 = input.nextInt();
       int m2 = input.nextInt();
       
       int total = (h2*60 + m2) - (h1*60 + m1);
       
       if (total < 0){
           total += 1440; 
       }
    
       if (total == 0) {
           System.out.println("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
       } else {
           int horatotal = total / 60;
           int minutototal = total % 60;
           
           System.out.printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)%n", horatotal, minutototal);
       }
    }
}