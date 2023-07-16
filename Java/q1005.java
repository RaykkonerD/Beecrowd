// Média 1

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        double a = reader.nextDouble();
        double b = reader.nextDouble();
        double media = (a*3.5 + b*7.5)/11;
        
        System.out.printf("MEDIA = %.5f%n", media);
    }
}