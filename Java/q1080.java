// Maior e Posição

import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) {
 
         Scanner input = new Scanner(System.in);
         int posicao = 1;
         int maior = input.nextInt();
         
         for(int i=2; i<=100; i++){
             int n = input.nextInt();
             
             if(n > maior){
                 maior = n;
                 posicao = i;
             }
         }
         
         System.out.println(maior);
         System.out.println(posicao);
    }
}