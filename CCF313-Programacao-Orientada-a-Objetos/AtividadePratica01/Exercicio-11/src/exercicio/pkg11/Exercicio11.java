/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicio.pkg11;

import java.util.Random;
import java.util.Scanner;

/**
 *
 * @author Isabella
 */
public class Exercicio11 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        /*
            Crie um jogo para o usuário descobrir um número sorteado de 1 a 100. A
            cada tentativa dele, forneça uma dica falando se o número é maior ou menor.
            Quando ele descobrir, exiba uma mensagem de parabéns e mostre em
            quantas tentativas ele conseguiu.
        */
        
        Random random = new Random();
        Scanner teclado = new Scanner(System.in);
        System.out.println("Acerte o número gerado!");
        System.out.println("Dê seu palpite:");
        int numeroGerado = 1 + random.nextInt(99);
        //System.out.println(numeroGerado);
        int numeroPalpite = teclado.nextInt();
        int tentativas = 0;
        
        while(true){
            if(numeroPalpite > numeroGerado){
                System.out.println("Seu palpite é MAIOR do que o número gerado.");
                tentativas +=1;
                System.out.println("Digite outro palpite:");
                numeroPalpite =teclado.nextInt(); 
            }
            if(numeroPalpite < numeroGerado){
                System.out.println("Seu palpite é MENOR do que o número gerado.");
                tentativas +=1;
                System.out.println("Digite outro palpite:");
                numeroPalpite = teclado.nextInt();
            }
            if(numeroGerado == numeroPalpite){
                System.out.println("PARABÉNS, VOCÊ ACERTOU!!!");
                System.out.println("O número gerado era: "+numeroGerado);
                tentativas +=1;
                System.out.println("Você acertou o número em "+tentativas+" tentativas.");
                break;
            }
        }
        
    }
    
}
