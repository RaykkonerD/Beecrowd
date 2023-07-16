// Múltiplos

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        
        if (a > b){
            int aux = b;
            b = a;
            a = aux;
        }
        if (b%a != 0){
            System.out.println("Nao sao Multiplos");
        } else {
            System.out.println("Sao Multiplos");
        }
    }
}