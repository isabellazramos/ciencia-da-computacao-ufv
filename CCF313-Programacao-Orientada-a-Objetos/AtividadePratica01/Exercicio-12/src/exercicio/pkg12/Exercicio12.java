/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicio.pkg12;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;

/**
 *
 * @author Isabella
 */
public class Exercicio12 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        /*
        
        Leia de um arquivo* a relação de pacientes de uma clínica, cada um com o
        nome, o sexo, o peso, a idade e a altura. Escolha o formato do arquivo que
        achar mais adequado. Exiba um relatório contendo:
        i. a quantidade de pacientes.
        ii. a média de idade dos homens.
        iii. número de mulheres com altura entre 1,60 e 1,70 e peso acima de 70kg.
        iv. a quantidade de pessoas com idade entre 18 e 25.
        v. o nome do paciente mais velho e o nome da mulher mais baixa.
 
         */
        
        Scanner teclado = new Scanner(System.in);
        
        System.out.print("Informe o nome de arquivo texto:");
        String nomeArquivo = teclado.nextLine();
        int quantidadePacientes = 0, quantidadeHomens = 0, quantidadeMulheres = 0, faixaIdade = 0;
        String partes[] = new String[5];
        String nomePaciente,sexoPaciente;
        int idadePaciente;
        float pesoPaciente, alturaPaciente,mediaIdadeHomens=0;
        String nomeMaisVelho ="", nomeMaisBaixa="";
        int maisVelho = 0;
        float maisBaixo = 3;

        try {
            FileReader file = new FileReader(nomeArquivo);
            BufferedReader lerArq = new BufferedReader(file);
            String Line = lerArq.readLine(); // le a primeira linha
    
        while (Line != null){
                System.out.println(Line);
                quantidadePacientes +=1;
                partes = Line.split(";");
                nomePaciente = partes[0];
                sexoPaciente = partes[1];
                pesoPaciente = Float.parseFloat(partes[2]);
                idadePaciente = Integer.parseInt(partes[3]);
                alturaPaciente = Float.parseFloat(partes[4]);
                
                if(sexoPaciente.equals("M")){
                    mediaIdadeHomens = idadePaciente + mediaIdadeHomens;
                    quantidadeHomens +=1;
                }
                else if (sexoPaciente.equals("F") && alturaPaciente <= 1.7 && alturaPaciente>= 1.6 && pesoPaciente >70){
                    quantidadeMulheres +=1;
                }
                if(idadePaciente >=18 && idadePaciente <= 25){
                    faixaIdade +=1;
                }
                if(idadePaciente>maisVelho){
                maisVelho= idadePaciente;
                nomeMaisVelho = nomePaciente;
                }
                if(sexoPaciente.equals(("F")) && alturaPaciente<maisBaixo){
                    maisBaixo = alturaPaciente;
                    nomeMaisBaixa = nomePaciente;
                }
            Line = lerArq.readLine(); // le da segunda até a última linha
         }
         file.close();
        }catch (IOException e) {
            System.err.printf("Erro na abertura do arquivo: %s.\n",e.getMessage()); 
    }
        mediaIdadeHomens = mediaIdadeHomens/quantidadeHomens;
        System.out.println("Quantidade pacientes " + quantidadePacientes);
        System.out.println("A média de idade dos homens " + mediaIdadeHomens);
        System.out.println("Número de mulheres com altura entre 1,60 e 1,70 e peso acima de 70kg "+ quantidadeMulheres);
        System.out.println("A quantidade de pessoas com idade entre 18 e 25 "+ faixaIdade);
        System.out.println("O nome do paciente mais velho "+ nomeMaisVelho);
        System.out.println("A o nome da mulher mais baixa "+nomeMaisBaixa);
    }
    }
    

