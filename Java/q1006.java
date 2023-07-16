// Média 2

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        double a = reader.nextDouble();
        double b = reader.nextDouble();
        double c = reader.nextDouble();
        double media = (a*2 + b*3 + c*5)/10;
        
        System.out.printf("MEDIA = %.1f%n", media);
    }
}