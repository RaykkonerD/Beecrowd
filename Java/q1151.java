// Fibonacci Fácil

import java.util.Scanner;

public class Main {
    public static int fib(int n, int x, int y){
        if(n == 1){
            return x;
        }
        return fib(n-1, y, x+y);
    }
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        for(int i=1; i<=N; i++){
            System.out.print(fib(i, 0, 1) + (i==N ? "" : " "));
        }
        System.out.println();
    }
}