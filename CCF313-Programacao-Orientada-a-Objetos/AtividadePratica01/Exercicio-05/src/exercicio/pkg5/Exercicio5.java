/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicio.pkg5;

import java.util.Scanner;

/**
 *
 * @author Isabella
 */
public class Exercicio5 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        /* Verifique a validade de uma data de aniversário (solicite apenas o número
         * do dia e do mês). Além de falar se a data está válida, informe também o
         * nome do mês. Dica: meses com 30 dias: abril, junho, setembro e novembro.        
        */
        
        Scanner teclado = new Scanner (System.in);
        System.out.println("Digite uma data de aniversário:"
                + "\nFormato DD/MM");
        String data = teclado.nextLine();
        int dia  =  Integer.parseInt(data.substring(0, 2));
        int mes = Integer.parseInt(data.substring(3, 5));
        if(mes == 4 || mes ==6 || mes == 9 || mes == 11){
            if(dia>30){
                System.out.println("DATA INVÁLIDA!");
            }else{
                System.out.println("DATA VÁLIDA!");
                switch(mes){
                    case 4:
                        System.out.println(dia + " DE ABRIL");
                        break;
                    case 6:
                        System.out.println(dia + " DE JUNHO");
                        break;
                    case 9:
                        System.out.println(dia + " DE SETEMBRO");
                        break;
                    case 11:
                        System.out.println(dia + " DE NOVEMBRO");
                        break;
                }
            }
            
        }else if(mes  == 2){
            if(dia>28){
                System.out.println("DATA INVÁLIDA");
            }else{
                System.out.println("DATA VÁLIDA!");
                System.out.println(dia + " DE FEVEREIRO");
            }
        }else{
            if(dia >31){
                System.out.println("DATA INVÁLIDA!");
            }else{
                System.out.println("DATA VÁLIDA!");
                switch(mes){
                    case 1:
                        System.out.println(dia + " DE JANEIRO");
                        break;
                    case 3:
                        System.out.println(dia + " DE MARÇO");
                        break;
                    case 5:
                        System.out.println(dia + " DE MAIO");
                        break;
                    case 7:    
                        System.out.println(dia + " DE JULHO");
                        break;
                    case 8: 
                        System.out.println(dia + " DE AGOSTO");
                        break;
                    case 10:
                        System.out.println(dia + " DE OUTUBRO");
                        break;
                    case 12:
                        System.out.println(dia + " DE DEZEMBRO");
                        break;
                }
            }
        }
    }
    
}
