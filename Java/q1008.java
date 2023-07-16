// Salário

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        int n = reader.nextInt();
        int ht = reader.nextInt();
        double sh = reader.nextDouble();
        double salario = ht * sh;
        
        System.out.printf("NUMBER = %d%n", n);
        System.out.printf("SALARY = U$ %.2f%n", salario);
    }
}