/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicio.pkg8;

import java.util.Scanner;

/**
 *
 * @author Isabella
 */
public class Exercicio8 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        /*
            Escreva um programa em Java que leia da entrada padrão um número inteiro
            N, 0 < N < 1000, depois leia N números inteiros e imprima na saída padrão o
            menor valor, a média aritmética, o maior valor, a quantidade de números
            pares e a quantidade de números ímpares.
        */
        Scanner teclado = new Scanner(System.in);
        System.out.println("Digite a quantidade de números que deseja inserir:");
        int N = teclado.nextInt();
        if(N>0 && N<1000){
            int menorValor = 0, media = 0,maiorValor = 0, qtdPar = 0, qtdImpar = 0;
            
            System.out.println("Digite o 1º número:");
             int numero = teclado.nextInt();
             menorValor = numero;
             media +=numero;
             maiorValor = numero;
             if(numero %2 ==0){
                 qtdPar +=1;
             }else{
                 qtdImpar +=1;
             }
             
            for (int i = 0; i < N-1; i++) {
                System.out.println("Digite o "+(i+2)+"º número:");
                numero = teclado.nextInt();
                if(numero<menorValor){
                    menorValor = numero;
                }
                if(numero > maiorValor){
                    maiorValor = numero;
                }
                media += numero;
                if(numero %2 ==0){
                    qtdPar +=1;
                }else{
                    qtdImpar +=1;
                }
            }
            double mediaFinal = media/N;
            
            System.out.println("Media:" + mediaFinal);
            System.out.println("Menor Valor:"+ menorValor);
            System.out.println("Maior Valor:" + maiorValor);
            System.out.println("Quantidade par:" + qtdPar);
            System.out.println("Quantidade ímpar:" + qtdImpar);
        }
    }
    
}
