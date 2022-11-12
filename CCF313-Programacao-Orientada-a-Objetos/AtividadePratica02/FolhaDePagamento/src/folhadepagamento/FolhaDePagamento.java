/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package folhadepagamento;

/**
 *
 * @author Isabella Ramos
 */
public class FolhaDePagamento {
    public static class Funcionario{
        
        private String nomeFuncionario, dataNascimento, tipoContrato, dataAdmissao;
        private double valorSalario;
        private int qtdFilhosMenorDeIdade;

        public Funcionario(String nome, String dtaNascimento){
            this.nomeFuncionario = nome;
            this.dataNascimento = dtaNascimento;
        }
        
        public void Contratar(String tipoContrato,double salario,int numFilhos,String dtaAdmissao){
            this.tipoContrato = tipoContrato;
            this.valorSalario = salario;
            this.qtdFilhosMenorDeIdade = numFilhos;
            this.dataAdmissao = dtaAdmissao;
        }
        
        public String getNome(){
            return nomeFuncionario;
        }
        
        public String getDataNascimento(){
            return dataNascimento;
        }
        
        public String getTipoContrato(){
            return tipoContrato;
        }
        
        public double getSalario(){
            return valorSalario;
        }
        
        public int getFilhosMenorDeIdade(){
            return qtdFilhosMenorDeIdade;
        }
        
        public String getDataAdmissao(){
            return dataAdmissao;
        }
        
        public void setTipoContrato(String tipoContrato){
            this.tipoContrato = tipoContrato; 
        }
        
        public void setValorSalario(double salario){
            this.valorSalario = salario;
        }
        
        public void setQtdFilhosMenorDeIdade(int qtd){
            this.qtdFilhosMenorDeIdade = qtd;
        }
        
        public void setDataAdmissao(String dataAdmissao){
            this.dataAdmissao = dataAdmissao;
        }
        
        public double CalculaSalarioBruto(int horasTrabalhadas){
            String contrato = this.tipoContrato;
            if("Horista".equals(contrato)){
                return valorSalario * horasTrabalhadas;
            }else{
                return valorSalario;
            }
        }
        
        public double DescontoINSS(int qtdHoras){
            double salarioBruto =  CalculaSalarioBruto(qtdHoras);
            
            if(salarioBruto >= 1659.38){
                return (double) salarioBruto * 0.08;
            }
            else if(salarioBruto >= 1659.39 && salarioBruto <= 2765.66){
                return (double) salarioBruto * 0.09;
            }
            else if(salarioBruto >= 2765.67 && salarioBruto <= 5531.31){
                return (double) salarioBruto * 0.11;
            }
            else if(salarioBruto > 5531.31){
                return 5531.31 *0.11;
            }
            return -1; //entrada inválida
        }
        
        public double DescontoImpostoDeRenda(int qtdHoras){
            double salarioBruto = CalculaSalarioBruto(qtdHoras);
            salarioBruto = salarioBruto - DescontoINSS(qtdHoras);
            
            if(salarioBruto <= 1903.98){
                return 0;
            }
            else if (salarioBruto >= 1903.99 && salarioBruto <= 2826.65){
                return (double) (salarioBruto * 0.075) - 142.80;
            }
            else if(salarioBruto >= 2826.66 && salarioBruto <= 3751.05){
                return (double) (salarioBruto *0.15) - 354.80;
            }
            else if(salarioBruto >= 3751.06 && salarioBruto <= 4664.68){
                return (double) (salarioBruto * 0.225) - 636.13;
            }
            else if(salarioBruto >= 4664.68){
                return (double) (salarioBruto * 0.275) - 869.36;
            }
            return -1;//entrada inválida
        }
        
        public double CalculaSalarioLiquido(int qtdHoras){
            double salarioBruto = CalculaSalarioBruto(qtdHoras);
            
            double salarioLiquido = salarioBruto - (DescontoImpostoDeRenda(qtdHoras) + DescontoINSS(qtdHoras));
            return salarioLiquido;
        }   
        
            
        public void ImprimeFolhaDePagamento(int qtdHoras){
            System.out.println("Nome: "+getNome());
            System.out.println("Data de nascimento: "+getDataNascimento());
            System.out.println("Tipo de contrato: "+getTipoContrato());
            System.out.printf("Salario bruto: R$%.2f\n", CalculaSalarioBruto(qtdHoras));
            System.out.printf("Salario liquido: R$%.2f\n", CalculaSalarioLiquido(qtdHoras));
            System.out.println("Numero de filhos menor de idade: "+getFilhosMenorDeIdade());
            System.out.println("Data de admissão: "+getDataAdmissao());
            System.out.println();
        }
    }
}
