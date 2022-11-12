/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package maquinaderefrigerante;

import java.util.Scanner;
import maquinaderefrigerante.MaquinaDeRefrigerante;
import maquinaderefrigerante.Refrigerante;

/**
 *
 * @author Isabella
 */
public class Main {
    public static void main(String[] args) {
        MaquinaDeRefrigerante maquina = new MaquinaDeRefrigerante();
        Scanner teclado = new Scanner(System.in);
        int aux =  0;
        String refri;
        while(true){
            int valid = -1;
            while(valid !=1){
                System.out.println("---------------------------------------------\n"
                            + "MAQUINA DE REFRIGERANTES\n"
                            + "---------------------------------------------\n"
                            + "COLOQUE AS MOEDAS NA MAQUINA, UMA DE CADA VEZ \n"
                            + "ACEITAMOS MOEDAS R$0.10 , R$0.25 , R$0.50 ou R$1.00\n"
                            + "---------------------------------------------\n");
                
                System.out.println("Digite a moeda que vai colocar:");
                double result = teclado.nextDouble();
                maquina.recebeCredito(result);
                System.out.println("Deseja colocar mais credito? | 0 - Sim | 1 - Não");
                System.out.println("Você tem R$ de crédito: "+ maquina.creditoAtual);
                valid = teclado.nextInt();
            }
            
            
            int valido = -1;
            while(valido != 1){
                System.out.println("---------------------------------------------\n"
                            + "REFRIGERANTES DISPONIVEIS\n"
                            + "---------------------------------------------\n"
                            + "- "+maquina.r0.getNomeRefrigerante() +" " +maquina.r0.getValorRefrigerante()
                            + "\n- "+maquina.r1.getNomeRefrigerante() + " " +maquina.r1.getValorRefrigerante()
                            + "\n- "+maquina.r2.getNomeRefrigerante() + " " +maquina.r2.getValorRefrigerante()
                            + "\n- "+maquina.r3.getNomeRefrigerante() + " " +maquina.r3.getValorRefrigerante()
                            + "\n- "+maquina.r4.getNomeRefrigerante()+" " +maquina.r4.getValorRefrigerante());
                System.out.println("Digite o refrigerante que quer comprar:");
                refri = teclado.next();
                maquina.escolhaRefrigerante(refri);
                System.out.println("Deseja comprar mais um refrigerante? | 0 - Sim | 1 - Não");
                valido = teclado.nextInt();
                if(valido == 1){
                    break;
                }
            }
            System.out.println("Para finalizar a venda digite 2|"
                    + " para cancelar a venda digite 3"
                    + "| para continuar digite 4");
            aux = teclado.nextInt();
            
            if(aux == 2){
                maquina.finalizaVenda();
                break;
            }
            if(aux == 3){
                maquina.cancelaVenda();
            }
        }
    }
}
