
package persistencia;

import java.util.ArrayList;
import java.util.List;
import modelo.Produto;

public class ProdutoDAO {
    private ArrayList<Produto> produtos;
    
    public ProdutoDAO(){
        produtos = new ArrayList<Produto>();
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
