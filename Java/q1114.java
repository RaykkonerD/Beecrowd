// Senha fixa

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
 
        Scanner input = new Scanner(System.in);
        String senha = input.nextLine();
        
        while(!senha.equals("2002")) {
            System.out.println("Senha Invalida");
            senha = input.nextLine();
        }
        
        System.out.println("Acesso Permitido");
    }
}