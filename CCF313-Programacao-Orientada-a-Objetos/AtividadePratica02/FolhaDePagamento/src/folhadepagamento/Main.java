/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package folhadepagamento;

/**
 *
 * @author Isabella
 */
public class Main {
        public static void main(String[] args) {
            FolhaDePagamento.Funcionario Funcionario01 = new FolhaDePagamento.Funcionario("Isabella", "26/10/1999");
            
            Funcionario01.Contratar("Horista",10, 0, "12/03/2021");
            Funcionario01.CalculaSalarioBruto(300);
            Funcionario01.CalculaSalarioLiquido(300);
            Funcionario01.DescontoINSS(300);
            Funcionario01.DescontoImpostoDeRenda(300);
            Funcionario01.ImprimeFolhaDePagamento(300);
        }
}
