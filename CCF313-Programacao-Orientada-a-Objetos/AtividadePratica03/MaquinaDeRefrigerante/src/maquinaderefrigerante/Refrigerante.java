/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package maquinaderefrigerante;

/**
 *
 * @author Isabella
 */
public class Refrigerante {
    private String nomeRefrigerante;
    private double valorRefrigerante;
    
    public Refrigerante(String nomeRefrigerante, double valorRefrigerante){
        this.nomeRefrigerante = nomeRefrigerante;
        this.valorRefrigerante = valorRefrigerante;
    }
    
    public double getValorRefrigerante(){
        return this.valorRefrigerante;
    }
    
    public String getNomeRefrigerante(){
        return this.nomeRefrigerante;
    }
    
    public void setValorRefrigerante(double novoValorRefrigerante){
        this.valorRefrigerante = novoValorRefrigerante;
        System.out.println("Novo valor do refrigerante "+ this.nomeRefrigerante +
                " alterado com sucesso!");
    }
}
