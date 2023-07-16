// Crescente e Decrescente

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
 
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int y = input.nextInt();
        
        while(x != y) {
            if(x < y){
                System.out.println("Crescente");
            } else {
                System.out.println("Decrescente");
            }
            
            x = input.nextInt();
            y = input.nextInt();
        }
    }
}