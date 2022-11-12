/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicio.pkg13;

import java.util.Scanner;

/**
 *
 * @author Isabella
 */
public class Exercicio13 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        /*
            A operadora de celular Vai-Vai possui um plano com o valor mensal de
            R$50,00 que permite 100 minutos por mês para qualquer número. Além
            disso, ela oferece 50 minutos a mais para ligações destinadas a um número
            da própria Vai-Vai. Ainda neste plano ela tem uma promoção onde cada
            minuto gasto para telefone fixo consome somente a metade. O valor do
            minuto excedente para outras operadoras é de R$0,65, e para a própria VaiVai é R$0,20. 
            Faça um programa que permita ao usuário entrar com o tipo
            de ligação (‘o’ = outras operadoras, ‘v’ = a própria Vai-Vai, ou ‘f’ = telefone
            fixo) e a quantidade de minutos. A cada entrada, deve-se informar o quanto
            que ele tem de saldo e o valor a pagar. Faça isto enquanto ele indicar que
            existem mais ligações a serem digitadas
        */
        double precoMensal = 50;
        double qualquerNum = 100;
        double vaivaiNum = 50;
        int ligacao = 1;
        while(ligacao !=0){
            System.out.println("Digite o tipo de ligação que deseja fazer:\n"
                    + "f = telefone fixo\n"
                    + "v = numero vai-vai\n"
                    + "o = outras operadoras");
            Scanner teclado = new Scanner(System.in);
            String opcao = teclado.nextLine();
            
            if("v".equals(opcao)){
                System.out.println("Digite a quantidade de minutos:");
                int minutos = teclado.nextInt();
                if(vaivaiNum == 0){
                    qualquerNum = qualquerNum - minutos;
                }else{
                    vaivaiNum = vaivaiNum - minutos;
                    if(vaivaiNum < 0){
                        qualquerNum = qualquerNum + vaivaiNum;
                    }
                }
                if(qualquerNum <= 0){
                    precoMensal = precoMensal + (qualquerNum *-1 * 0.2);
                }
            }
            else if("o".equals(opcao)){
                System.out.println("Digite a quantidade de minutos:");
                int minutos = teclado.nextInt();
                qualquerNum = qualquerNum - minutos;
                if(qualquerNum <=0){
                    precoMensal = precoMensal + (qualquerNum * -1 * 0.65);
                }
            }
            else if("f".equals(opcao)){
               System.out.println("Digite a quantidade de minutos:");
               int minutos = teclado.nextInt();
               qualquerNum = qualquerNum - minutos;
               if(qualquerNum <= 0){
                   precoMensal = precoMensal + (qualquerNum * 0.5 *-1);
               }
            }
            System.out.println("Deseja fazer mais uma ligação?\n"
                    + "Digite 1 para sim\n"
                    + "Digite 0 para não");
            ligacao = teclado.nextInt();
            if(ligacao == 0){
                break;
            }
        }
        if(qualquerNum<0){
            qualquerNum=0;
        }
        if(vaivaiNum<0){
            vaivaiNum=0;
        }
        System.out.print("Você tem "+qualquerNum+" minutos restantes.\n"
                + "Você tem "+vaivaiNum+" minutos de bônus restantes.\n"
                        + "O valor total da conta é "+precoMensal+" reais.\n");
        
    }
    
}
