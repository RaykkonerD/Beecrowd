// Intervalo 

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
 
       Scanner input = new Scanner(System.in);
       double num = input.nextDouble();
       String saida = "Fora de intervalo";
       if (num >= 0 && num <= 100){
           saida = "Intervalo ";
           if (num <= 25){
               saida = saida + "[0,25]";
           } else if (num <= 50){
               saida = saida + "(25,50]";
           } else if (num <= 75){
               saida = saida + "(50,75]";
           } else {
               saida = saida + "(75,100]";
           }
       } 
        
       System.out.println(saida);
    }
}