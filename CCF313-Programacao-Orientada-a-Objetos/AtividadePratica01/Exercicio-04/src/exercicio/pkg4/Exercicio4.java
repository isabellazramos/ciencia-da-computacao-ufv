/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicio.pkg4;

import java.util.Scanner;

/**
 *
 * @author Isabella
 */
public class Exercicio4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        /*
            Receba do usuário o nome de um mês e exiba o número equivalente. Ex.
            "Janeiro" = 1

        */
        
        Scanner teclado =  new Scanner (System.in);
        System.out.println("Digite um mês:");
        String mes = teclado.nextLine();
        
        switch(mes){
            case "Janeiro":
                System.out.println("1");
                break;
            case "Fevereiro":
                System.out.println("2");
                break;
            case "Março":
                System.out.println("3");
                break;
            case "Abril":
                System.out.println("4");
                break;
            case "Maio":
                System.out.println("5");
                break;
            case "Junho":
                System.out.println("6");
                break;
            case "Julho":
                System.out.println("7");
                break;
            case "Agosto":
                System.out.println("8");
                break;
            case "Setembro":
                System.out.println("9");
                break;
            case "Outubro":
                System.out.println("10");
                break;
            case "Novembro":
                System.out.println("11");
                break;
            case "Dezembro":
                System.out.println("12");
                break;
            default:
                System.out.println("VALOR INVÁLIDO!");
        }
        
    }
    
}
