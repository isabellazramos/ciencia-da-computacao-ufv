/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicio.pkg10;

import java.util.Scanner;

/**
 *
 * @author Isabella
 */
public class Exercicio10 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        /*
            Crie uma calculadora que funcione através da linha de comando. Esta
            calculadora deve receber comandos aritméticos, e após receber cada
            comando deve realizar o cálculo e exibir o resultado. Os comandos são no
            formato:
            MULTIPLICA A POR B
            DIVIDE A POR B
            SOMA A E B
            SUBTRAI A DE B
        */
        
        Scanner teclado = new Scanner(System.in);
        System.out.println("Digite a operação que deseja fazer:");
        String operacao = teclado.nextLine();
        
        if(operacao.indexOf("MULTIPLICA") == 0){
            operacao = operacao.replace("MULTIPLICA", "");
            operacao = operacao.replace("POR", "");
            operacao = operacao.trim();
            String numeros[];
            numeros = operacao.split(" \\s");
            int A = Integer.parseInt(numeros[0]);
            int B = Integer.parseInt(numeros[1]);
            
            System.out.println("RESPOSTA:"+(A*B));
        }
        else if(operacao.indexOf("DIVIDE") == 0){
            operacao = operacao.replace("DIVIDE", "");
            operacao = operacao.replace("POR", "");
            operacao = operacao.trim();
            String numeros[];
            numeros = operacao.split(" \\s");
            int A = Integer.parseInt(numeros[0]);
            int B = Integer.parseInt(numeros[1]);
            
            System.out.println("RESPOSTA:"+(A/B));
        }
        else if(operacao.indexOf("SOMA") == 0){
            operacao = operacao.replace("SOMA", "");
            operacao = operacao.replace("POR", "");
            operacao = operacao.trim();
            String numeros[];
            numeros = operacao.split(" \\s");
            int A = Integer.parseInt(numeros[0]);
            int B = Integer.parseInt(numeros[1]);
            
            System.out.println("RESPOSTA:"+(A+B));
        }
        else if(operacao.indexOf("SUBTRAI") == 0){
            operacao = operacao.replace("SUBTRAI", "");
            operacao = operacao.replace("POR", "");
            operacao = operacao.trim();
            String numeros[];
            numeros = operacao.split(" \\s");
            int A = Integer.parseInt(numeros[0]);
            int B = Integer.parseInt(numeros[1]);
            
            System.out.println("RESPOSTA:"+(A-B));
        }
    }
    
}
