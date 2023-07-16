// Esfera

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        double raio = reader.nextDouble();
        double pi = 3.14159;
        double vol = (4/3.0) * pi * (raio*raio*raio);
        
        System.out.printf("VOLUME = %.3f%n", vol);
    }
}