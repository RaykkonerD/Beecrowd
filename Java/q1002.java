// Área do Círculo 

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        double raio = reader.nextDouble();
        double pi = 3.14159;
        double area = pi * raio*raio;
        
        System.out.printf("A=%.4f%n", area);
    }
}