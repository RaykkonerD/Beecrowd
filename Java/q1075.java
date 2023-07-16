// Resto 2

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        for(int i=2; i<10000; i++){
            if(i%N == 2){
                System.out.println(i);
            }
        }
    }
}