/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicio.pkg7;

import java.util.Scanner;

/**
 *
 * @author Isabella
 */
public class Exercicio7 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        /*
            Escreva um programa em Java que leia da entrada padrão um número inteiro
            N, 0 < N < 100, depois leia N números inteiros e imprima na saída padrão a
            soma e o produto destes N números.
        */
        Scanner teclado = new Scanner(System.in);
        System.out.println("Digite a quantidade de números que deseja inserir:");
        int N = teclado.nextInt();
        if(0<N && N<100){
            int soma = 0;
            int produto = 1;
            for (int i = 0; i < N; i++) {
                System.out.println("Digite o "+(i+1)+"º número:");
                int numero = teclado.nextInt();
                soma += numero;
                produto *= numero;
            }
            System.out.println("SOMA TOTAL:"+ soma);
            System.out.println("PRODUTO TOTAL:" + produto);
        }else{
            System.out.println("Quantidade de números inválida!");
        } 
    }
    
}
