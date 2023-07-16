// Aumento de Salário

import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) {
 
       Scanner input = new Scanner(System.in);
       double sal = input.nextDouble();
       double perc;

       if (sal <= 400){
           perc = 15.0;
       } else if (sal <= 800) {
           perc = 12.0;
       } else if (sal <= 1200) {
           perc = 10.0;
       } else if (sal <= 2000) {
           perc = 7.0;
       } else {
           perc = 4.0;
       }
       
       double reajuste = perc/100 * sal;
       double novoSalario = sal + reajuste;
       
       System.out.printf("Novo salario: %.2f%n", novoSalario);
       System.out.printf("Reajuste ganho: %.2f%n", reajuste);
       System.out.printf("Em percentual: %.0f %%%n", perc);
    }
}