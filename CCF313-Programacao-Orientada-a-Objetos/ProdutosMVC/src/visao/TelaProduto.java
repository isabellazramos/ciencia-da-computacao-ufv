package visao;

import controle.ControleProduto;
import java.util.ArrayList;
import java.util.Scanner;

public class TelaProduto {
    
    private Scanner s;
    private ControleProduto controleProduto;
    
    public TelaProduto(){
        s = new Scanner(System.in);
        controleProduto = new ControleProduto();
    }

    
    public void telaInicial() {
        mostrarMenu();
        int opcao;
        while(true){
            opcao = s.nextInt();
            switch(opcao){
                case 1:
                    telaInserir();
                    break;
                case 2:
                    telaListar();
                    break;
                case 3 :
                    System.exit(0);
                    break;
                default:
                    System.out.println("Opção inválida!");
            }
            mostrarMenu();
        }
    }
    
    private void mostrarMenu(){
        System.out.println("Digite: ");
        System.out.println("1: inserir produto ");
        System.out.println("2: listar produtos");
        System.out.println("3: sair");
    }
    
    private void telaInserir(){
        System.out.println("Digite o código e o nome do produto:");
        int codigo = s.nextInt();
        String nome = s.next();
        controleProduto.inserirProduto(codigo, nome);
    }

    private void telaListar() {
       ArrayList<String> produtos = controleProduto.listarProdutos();
       
       System.out.println("Total de produtos: "+ produtos.size());
       for(String s : produtos){
           System.out.println(s);
       }
        System.out.println("####################");
    }
}
