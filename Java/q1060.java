// Números Positivos

import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) {
 
         Scanner input = new Scanner(System.in);
         int pos = 0;
         
         for(int i=0; i<6; i++){
             double n = input.nextDouble();
             if(n > 0){
                 pos++;
             }
         }
         
         System.out.printf("%d valores positivos%n", pos);
    }
 
}