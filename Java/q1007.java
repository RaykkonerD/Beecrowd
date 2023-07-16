// Diferença 

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        int a = reader.nextInt();
        int b = reader.nextInt();
        int c = reader.nextInt();
        int d = reader.nextInt();
        int dif = (a*b - c*d);
        
        System.out.printf("DIFERENCA = %d%n", dif);
    }
}