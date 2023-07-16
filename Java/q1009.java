// Salário com Bônus

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        String nome = reader.nextLine();
        double sf = reader.nextDouble();
        double tv = reader.nextDouble();
        double salario = sf + (0.15 * tv);
        
        System.out.printf("TOTAL = R$ %.2f%n", salario);
    }
}