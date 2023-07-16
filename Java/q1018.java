// Cédulas

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        
        System.out.println(num);
        int[] cedulas = {100, 50, 20, 10, 5, 2, 1};
        for (int i = 0; i < cedulas.length; i++) {
            int notas = num/cedulas[i];
            System.out.printf("%d nota(s) de R$ %d,00%n", notas, cedulas[i]);
            num = num - notas*cedulas[i];
        }
    }
}