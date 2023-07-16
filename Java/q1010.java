// Cálculo Simples

import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner reader = new Scanner(System.in);
    int c1 = reader.nextInt();
    int n1 = reader.nextInt();
    double v1 = reader.nextDouble();
    int c2 = reader.nextInt();
    int n2 = reader.nextInt();
    double v2 = reader.nextDouble();
    double total = n1*v1 + n2*v2;
    
    System.out.printf("VALOR A PAGAR: R$ %.2f%n", total);
  }
}