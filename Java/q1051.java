// Imposto de Renda

import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) {
 
       Scanner input = new Scanner(System.in);
       double salario = input.nextDouble();
    
       if (salario <= 2000) {
           System.out.println("Isento");
       } else {
           double naoisento08 = salario - 2000;
           double naoisento018 = salario - 3000;
           double naoisento028 = salario - 4500;
           double irpf;
           
           if (salario <= 3000){
               irpf = 0.08 * naoisento08;
           } else if (salario <= 4500) {
               irpf = 80 + 0.18 * naoisento018;
           } else {
               irpf = 350 + 0.28 * naoisento028;
           } 
       
           System.out.printf("R$ %.2f%n", irpf);

          
       }
    }
}