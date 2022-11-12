/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicio.pkg9;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

/**
 *
 * @author Isabella
 */
public class Exercicio9 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        /*
            Escreva um programa Java que leia da entrada padrão números inteiros até
            encontrar a palavra fim, ordene de forma crescente os números lidos e
            imprima na saída padrão o conjunto de números ordenado
        */
        Scanner teclado = new Scanner(System.in);
        ArrayList<Integer> lista = new ArrayList<>();
        String entrada = "";
        
        while(true){
            System.out.println("Digite um número qualquer - para finalizar o programa digite: fim");
            entrada = teclado.nextLine();
            if("fim".equals(entrada)){
                break;
            }
            int n = Integer.parseInt(entrada);
            lista.add(n);
        }
        Collections.sort(lista);
        System.out.println(lista);
        
    }
    
}
