/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicio.pkg1;

import java.util.Scanner;

/**
 *
 * @author Isabella
 */
public class Exercicio1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        /*
            Determine qual é a idade que o usuário faz no ano atual. Para isso solicite o
            ano de nascimento do usuário e o ano atual.
        
        */
        
        Scanner teclado  =  new Scanner(System.in);
        System.out.println("Digite o ano de seu nascimento:");
        int anoNasc = teclado.nextInt();
        System.out.println("Digite o ano atual em que estamos:");
        int anoAtual = teclado.nextInt();
        int idade = anoAtual - anoNasc;
        System.out.format("Você tem %d anos.\n",idade);
    }
    
}
