// Média 3

import java.util.Scanner;
import java.text.DecimalFormat;

public class Main {
    public static void main(String[] args) {
      DecimalFormat df = new DecimalFormat("0.0");
      Scanner input = new Scanner(System.in);
      double n1 = input.nextDouble();
      double n2 = input.nextDouble();
      double n3 = input.nextDouble();
      double n4 = input.nextDouble();
      double media = (n1*2 + n2*3 + n3*4 + n4)/10;
    System.out.println("Media: " + df.format(media));
    				if (media >= 5.0 && media < 7.0){
    								System.out.println("Aluno em exame.");
    								double notaExame = input.nextDouble();
    								double mediaFinal = (notaExame + media)/2;
    								System.out.println("Nota do exame: " + df.format(notaExame));
    								if (notaExame >= 5.0){
    												System.out.println("Aluno aprovado.");
       } else {
       				System.out.println("Aluno reprovado.");
       }
        
       System.out.println("Media final: " + df.format(mediaFinal));
    				} else if(media >= 7.0) {
    						  System.out.println("Aluno aprovado.");
    				} else {
    						  System.out.println("Aluno reprovado.");
    		}
    }
}