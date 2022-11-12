#ifndef DADOS_H
#define DADOS_H

typedef struct Dados
{
    int qntMovimento;
    int consegueSair;
    int colunaChegou;
}TipoDados;

#endif

void IniciarDados(TipoDados *dados);
void ImprimirDados(TipoDados dados);
void DadosFinal(TipoDados *dados, int i);