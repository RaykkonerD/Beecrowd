// Médias Ponderadas

import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) {
 
         Scanner input = new Scanner(System.in);
         int N = input.nextInt();
         
         for(int i=0; i<N; i++){
             double n1 = input.nextDouble();
             double n2 = input.nextDouble();
             double n3 = input.nextDouble();
             
             double media = (n1*2+n2*3+n3*5)/10.0;
             System.out.printf("%.1f%n", media);
             
         }
    }
}