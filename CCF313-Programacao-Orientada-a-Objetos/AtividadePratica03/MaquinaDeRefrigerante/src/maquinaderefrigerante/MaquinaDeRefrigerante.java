/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package maquinaderefrigerante;

import maquinaderefrigerante.Refrigerante;

/**
 *
 * @author Isabella
 */
public class MaquinaDeRefrigerante {

    double saldoMaquina;
    int[] quantidadeRefrigerante = new int[5];
    double creditoAtual;
    double contaCliente;
  
    Refrigerante r0 = new Refrigerante("Sprite", 4.00);
    Refrigerante r1 = new Refrigerante("Coca-Cola", 5.00);
    Refrigerante r2 = new Refrigerante("Mate Couro", 4.50);
    Refrigerante r3 = new Refrigerante("Pepsi", 3.00);
    Refrigerante r4 = new Refrigerante("Dolly", 2.50);
        
    
    public MaquinaDeRefrigerante(){
        java.util.Arrays.fill(this.quantidadeRefrigerante,20);
        
        this.saldoMaquina = 10.0;
        this.creditoAtual = 0;
        this.contaCliente = 0;
    }
    
    public void recebeCredito(double novoCredito){
        this.creditoAtual += novoCredito;
        System.out.println("Crédito adicionado com sucesso!");
    }
    
    public double getCredito(){
        return this.creditoAtual;
    }
    
    public void alteraEstoque(String nomeRefrigerante,int novoEstoque){
        if(nomeRefrigerante.equals(r0.getNomeRefrigerante())){
            this.quantidadeRefrigerante[0] = novoEstoque;
            System.out.println("Estoque atualizado com sucesso!");
        }
        else if(nomeRefrigerante.equals(r1.getNomeRefrigerante())){
            this.quantidadeRefrigerante[1] = novoEstoque;
            System.out.println("Estoque atualizado com sucesso!");
        }
        else if(nomeRefrigerante.equals(r2.getNomeRefrigerante())){
            this.quantidadeRefrigerante[2] = novoEstoque;
            System.out.println("Estoque atualizado com sucesso!");
        } 
        else if(nomeRefrigerante.equals(r3.getNomeRefrigerante())){
            this.quantidadeRefrigerante[3] = novoEstoque;
            System.out.println("Estoque atualizado com sucesso!");
        } 
        else if(nomeRefrigerante.equals(r4.getNomeRefrigerante())){
            this.quantidadeRefrigerante[4] = novoEstoque;
            System.out.println("Estoque atualizado com sucesso!");
        }         
    }
    
    public void escolhaRefrigerante(String nomeRefrigerante){
        if(nomeRefrigerante.equals(r0.getNomeRefrigerante())){
            if(this.quantidadeRefrigerante[0] >0){
         
                if(this.creditoAtual>= r0.getValorRefrigerante()){
                    this.quantidadeRefrigerante[0] -=1;
                    contaCliente += r0.getValorRefrigerante();
                    creditoAtual -= r0.getValorRefrigerante();
                }else{
                    System.out.println("Não foi possível continuar a compra, adiciona mais crédito!");
                    return;
                }               
            }else{
                System.out.println("O refrigerante não está em estoque!");
                return;
            }
        }
        else if(nomeRefrigerante.equals(r1.getNomeRefrigerante())){
            if(this.quantidadeRefrigerante[1] >0){
         
                if(this.creditoAtual>= r1.getValorRefrigerante()){
                    this.quantidadeRefrigerante[1] -=1;
                    contaCliente += r1.getValorRefrigerante();
                    creditoAtual -= r1.getValorRefrigerante();
                }else{
                    System.out.println("Não foi possível continuar a compra, adiciona mais crédito!");
                    return;
                }               
            }else{
                System.out.println("O refrigerante não está em estoque!");
                return;
            }
        }
        else if(nomeRefrigerante.equals(r2.getNomeRefrigerante())){
            if(this.quantidadeRefrigerante[2] >0){
         
                if(this.creditoAtual>= r2.getValorRefrigerante()){
                    this.quantidadeRefrigerante[2] -=1;
                    contaCliente += r2.getValorRefrigerante();
                    creditoAtual -= r2.getValorRefrigerante();
                }else{
                    System.out.println("Não foi possível continuar a compra, adiciona mais crédito!");
                    return;
                }               
            }else{
                System.out.println("O refrigerante não está em estoque!");
                return;
            }
        } 
        else if(nomeRefrigerante.equals(r3.getNomeRefrigerante())){
            if(this.quantidadeRefrigerante[3] >0){
         
                if(this.creditoAtual>= r3.getValorRefrigerante()){
                    this.quantidadeRefrigerante[3] -=1;
                    contaCliente += r3.getValorRefrigerante();
                    creditoAtual -= r3.getValorRefrigerante();
                }else{
                    System.out.println("Não foi possível continuar a compra, adiciona mais crédito!");
                    return;
                }               
            }else{
                System.out.println("O refrigerante não está em estoque!");
                return;
            }
        } 
        else if(nomeRefrigerante.equals(r4.getNomeRefrigerante())){
            if(this.quantidadeRefrigerante[4] >0){
         
                if(this.creditoAtual>= r4.getValorRefrigerante()){
                    this.quantidadeRefrigerante[4] -=1;
                    contaCliente += r4.getValorRefrigerante();
                    creditoAtual -= r4.getValorRefrigerante();
                }else{
                    System.out.println("Não foi possível continuar a compra, adiciona mais crédito!");
                    return;
                }               
            }else{
                System.out.println("O refrigerante não está em estoque!");
                return;
            }
        } 
    }
    
    public void cancelaVenda(){
        System.out.println("Venda Cancelada!");
        System.exit(0);
    }
    
    public void finalizaVenda(){
        //double resul = this.creditoAtual-this.contaCliente;
        this.saldoMaquina += this.contaCliente;
        this.saldoMaquina -= this.creditoAtual;
        System.out.println("Venda Concluida!\n"
                + "---------------------------------------------\n"
                + "Total a pagar: " + this.contaCliente+"\n"
                + "Seu troco: "+this.creditoAtual+"\n"
                + "---------------------------------------------" );
    }

    
}
