// Soma de Ímpares Consecutivos

import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
 
         Scanner input = new Scanner(System.in);
         int x = input.nextInt();
         int y = input.nextInt();
         int soma = 0;
         
         if(y < x){
             int aux = x;
             x = y;
             y = aux;
         }

         for(int i=x+1; i<y; i++){
             if(i%2 != 0) {
                 soma += i;
             }
         }
         
         System.out.println(soma);
    }
 
}