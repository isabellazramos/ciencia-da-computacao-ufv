/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicio.pkg3;

import java.util.Scanner;

/**
 *
 * @author Isabella
 */
public class Exercicio3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        /*
            Um banco concede empréstimo a seus clientes no valor máximo de 30% do
            valor do seu salário líquido. Receba o valor do salário bruto, o valor dos
            descontos e o valor do pedido de empréstimo de um cliente, e em seguida
            avise se ele poderá ou não fazer o empréstimo.
        */
        
        Scanner teclado = new Scanner(System.in);
        System.out.println("Digite o valor de seu salário bruto:");
        double salarioBruto = teclado.nextDouble();
        System.out.println("Digite o valor de seus descontos:");
        double valorDescontos = teclado.nextDouble();
        System.out.println("Digite o valor do pedido do empréstimo:");
        double valorEmprestimo = teclado.nextDouble();
        
        double salarioFinal = salarioBruto - valorDescontos;
        double valorMaximo = salarioFinal * 0.3;
        
        if(valorEmprestimo <= valorMaximo){
            System.out.println("O empréstimo podera ser realizado.");
        }else{
            System.out.println("O empréstimo NÃO poderá ser realizado.");
        }
    }
    
}
