// Positivos e Média

import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int nPos = 0;
        double soma = 0;
        
        for(int i=0; i<6; i++){
        	double n = input.nextDouble();
        	if(n > 0){
        	    soma = soma + n;
        	    nPos++;
            } 
        }
        
        double media = soma/nPos;
        System.out.printf("%d valores positivos%n", nPos);
        System.out.printf("%.1f%n", media);
    }
 
}