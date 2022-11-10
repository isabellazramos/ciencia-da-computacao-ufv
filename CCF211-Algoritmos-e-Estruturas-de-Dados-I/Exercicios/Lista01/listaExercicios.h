//
// Created by isabella on 16/08/2019.
//

#ifndef LISTAEXERCICIOS01_LISTAEXERCICIOS_H
#define LISTAEXERCICIOS01_LISTAEXERCICIOS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


//Questao 01
float litrosCombustivel(int tempo,float velocidadeMedia);

//Questao 02
float calcularMedia(float nota1, float nota2, float nota3);
void sistemaNotas(float notasAluno1[3], float notasAluno2[3], float notasAluno3[3]);

//Questao 03
void lerIdades(int idade, int *soma_p);

//Questao04
void comparacaoMeteorologica(int soma1,int soma2);

//Questao05
void identificadorMatrizId(int n,int matriz[][n]);

//Questao06
struct tFlor{
    int id;
    char nome[30];
    float preco;
    char paisOrigem[15];
    int qtdEstoque;
    char coloracaoPredominante[10];
};

//Questao07
int calculaFatorial(int numero);

//Questao08
struct perfilSocioeconomico{
    char estadoBrasileiro[15];
    int cpf;
    char nomeProdutoComprado[20];
    float precoProdutoComprado;
};
int escreveBaseDeDados(struct perfilSocioeconomico perfil, struct perfilSocioeconomico perfil2[], int n);
void imprimirBaseDeDados(struct perfilSocioeconomico perfil2[]);

//Questao09
void ordenaVetor(int *vetor);
void caixasPesadasELeves(int *vetor,int *pesadas,int *leves);
void imprimirCaixas(int *pesadas,int *leves);
#endif //LISTAEXERCICIOS01_LISTAEXERCICIOS_H
