/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicio.pkg14;

import java.util.Scanner;

/**
 *
 * @author Isabella
 */
public class Exercicio14 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        /*
            Desenhe a seguinte pirâmide de asteriscos. O usuário determina a quantidade
            de linhas.
        */
        
        System.out.println("Diga a quantidade de linhas de linhas:");
        Scanner teclado = new Scanner(System.in);
        int cont = 1;
        int linhas  = teclado.nextInt();
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < cont; j++) {
                System.out.print("*");
            }
            cont +=1;
            System.out.println("");
        }
    }
    
}
