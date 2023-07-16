// Produto Simples

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        int a = reader.nextInt();
        int b = reader.nextInt();
        
        System.out.printf("PROD = %d%n", (a*b));
    }
}