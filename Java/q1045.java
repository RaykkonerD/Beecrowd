// Tipos de triângulos

import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        double a = input.nextDouble();
        double b = input.nextDouble();
        double c = input.nextDouble();
        double A, B, C;
        
        if (a > b){
            if (a > c){
                A = a;
                B = c;
                C = b;
            } else {
                A = c;
                B = a;
                C = b;
            }
         } else {
             if (b > c){
                 A = b;
                 B = c;
                 C = a;
            } else {
                A = c;
                B = b;
                C = a;
            }
         }
         
         if (A >= B+C){
             System.out.println("NAO FORMA TRIANGULO");
         } else if ((A*A) == (B*B)+(C*C)){
             System.out.println("TRIANGULO RETANGULO");
         } else if ((A*A) > (B*B)+(C*C)){
             System.out.println("TRIANGULO OBTUSANGULO");
         } else if ((A*A) < (B*B)+(C*C)){
             System.out.println("TRIANGULO ACUTANGULO");
         }
         
         if (A == B && B == C){
             System.out.println("TRIANGULO EQUILATERO");
         } else if (A == C || B == C || A == B){
             System.out.println("TRIANGULO ISOSCELES");
         }
    }
}