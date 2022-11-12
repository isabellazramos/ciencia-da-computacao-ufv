/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicio.pkg6;

import java.util.Scanner;

/**
 *
 * @author Isabella
 */
public class Exercicio6 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        /*
            Receba 2 horários (horas, minutos e segundos) e exiba a diferença entre eles
            em segundos. A entrada destes horários pode ocorrer em qualquer ordem.

        */
        Scanner teclado = new Scanner (System.in);
        
        System.out.println("Digite o primeiro horário: HH:MM:SS");
   
        String horario01 = teclado.nextLine();
        int hora01 = Integer.parseInt(horario01.substring(0, 2));
        int minuto01 = Integer.parseInt(horario01.substring(3, 5));
        int segundo01 = Integer.parseInt(horario01.substring(6, 8));
        
        int resultadoHora01 = 0;
        resultadoHora01 += (hora01 *3600);
        resultadoHora01 += (minuto01 * 60);
        resultadoHora01 += segundo01;
        
        System.out.println("Digite o segundo horário: HH:MM:SS");
   
        String horario02 = teclado.nextLine();
        int hora02 = Integer.parseInt(horario02.substring(0, 2));
        int minuto02 = Integer.parseInt(horario02.substring(3, 5));
        int segundo02 = Integer.parseInt(horario02.substring(6, 8));
        
        int resultadoHora02 = 0;
        resultadoHora02 += (hora02 *3600);
        resultadoHora02 += (minuto02 * 60);
        resultadoHora02 += segundo02;
        
        if((resultadoHora01-resultadoHora02)>0){
            int res = resultadoHora01-resultadoHora02;
            System.out.println("A diferença entre as horas são de "+ res + " segundos.");
        }else{
            int res = resultadoHora02-resultadoHora01;
            System.out.println("A diferença entre as horas são de "+ res + " segundos.");
        }
    }
    
}
