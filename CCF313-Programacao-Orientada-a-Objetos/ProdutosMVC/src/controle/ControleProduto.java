
package controle;

import java.util.ArrayList;
import java.util.List;
import modelo.Produto;
import persistencia.ProdutoDAO;
import persistencia.ProdutoDAOLinkedList;

public class ControleProduto {
    
    //ProdutoDAO produtoDAO;
    ProdutoDAOLinkedList produtoDAO;
    
    public ControleProduto(){
        //produtoDAO = new ProdutoDAO();
        produtoDAO = new ProdutoDAOLinkedList();
    }
    
    public void inserirProduto(int codigo, String nome){
        Produto p = new Produto (codigo,nome);
        
        Produto pExistente = produtoDAO.pesquisa(codigo);
        if(pExistente != null){
            System.err.println("Produto com o código " +
                    codigo + " já existe");
        } else{
            produtoDAO.inserirProduto(p);
        }
        
    }
    
    public ArrayList<String> listarProdutos(){
        ArrayList<String> produtosStr = new ArrayList<String>();
        List<Produto> produtos = produtoDAO.listarProdutos();
        
        for(Produto p : produtos){
            produtosStr.add(p.toString());
        }
        
        return produtosStr;
    }
}
