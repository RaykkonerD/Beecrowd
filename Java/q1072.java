// Intervalo 2

import java.util.Scanner;

public class Main {
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        int in = 0;
        int out = 0;
        
        for(int i=0; i<N; i++){
            int x = input.nextInt();
            if(x >= 10 && x <= 20) {
                in++;
            } else {
                out++;
            }
        }
        System.out.printf("%d in%n", in);
        System.out.printf("%d out%n", out);
    }
}