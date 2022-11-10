//
// Created by isabella on 16/08/2019.
//

//Um professor deseja otimizar o lançamento de notas no sistema que transforma as notas numéricas em
//conceitos de A a F, além disso ele quer que uma mensagem personalizada seja enviada para cada
//estudante mediante a sua nota. Desenvolva um sistema capaz de receber 3 notas de 3 alunos, calcular a
//média retornando seu conceito e a mensagem personalizada conforme a tabela. O sistema deve encerrar ao
//receber uma nota negativa. Faça o programa de 2 maneiras: usando e não usando algum laço de repetição.

#include <stdio.h>
#include "listaExercicios.h"

int main(){
    float notas1[] = {50, 60, 70};
    float notas2[] = {90,60,100};
    float notas3[] = {90,80,70};
    sistemaNotas(notas1,notas2,notas3);
}