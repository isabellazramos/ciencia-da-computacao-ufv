/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicio.pkg2;

import java.util.Scanner;

/**
 *
 * @author Isabella
 */
public class Exercicio2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        /*
            Transforme um número Racional (formado por numerador e denominador)
            em um número Real. Antes de dividir, verifique se o denominador é
            diferente de zero. Emita uma mensagem de alerta ao usuário se for zero.

        */
        
        Scanner teclado  =  new Scanner(System.in);
        System.out.println("Digite um numerador:");
        int numerador = teclado.nextInt();
        System.out.println("Digite um denominador:");
        int denominador = teclado.nextInt();
        
        if(denominador == 0){
            System.out.println("Denominador igual a zero! Fração inválida!");
        }else{
            double resultado = numerador / denominador;
            System.out.format("O resultado da divisão é %.3f.\n",resultado);
        }
        
    }
    
}
