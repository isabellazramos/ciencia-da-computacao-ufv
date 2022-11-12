
package persistencia;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import modelo.Produto;

public class ProdutoDAOLinkedList {
    private LinkedList<Produto> produtos;
    
    public ProdutoDAOLinkedList(){
        produtos = new LinkedList<Produto>();
    }
    
    public void inserirProduto(Produto p){
        produtos.add(p);
    }
    
    public Produto pesquisa(int codigo){
        for(Produto p : produtos){
            if(p.getCodigo() == codigo){
                return p;
            }
        }
        return null;
    }
    
    public List<Produto> listarProdutos(){
        return produtos;
    }
}
