
package modelo;

public class Produto {
    private String nome;
    private int codigo;
    
    public Produto(int codigo, String nome){
        this.codigo = codigo;
        this.nome = nome;
    }
    
    @Override
    public String toString(){
        return "Produto " + this.codigo + " com nome " + this.nome;
    }

    public int getCodigo() {
        return this.codigo;
    }
}
