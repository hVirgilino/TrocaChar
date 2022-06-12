#include "TrocaChar.h"
#include <stdio.h>
#include <stdlib.h>

int TrocaChar(char **msgAntes, int qtdCharVet, char charAntes, char charDepois, char **msgDepois){

    int qtdTrocas = 0;

    //Aloca para o tamanho da string de saída ser do tamanho da de entrada
    *msgDepois = (char *)malloc (qtdCharVet * sizeof(char));

    for (int i = 0; i <= qtdCharVet; i++)
    {
        //Constrói a string de saída de acordo com os caracteres da de entrada
        (*msgDepois)[i] = (*msgAntes)[i];

        //Caso um desses caracteres seja o definido, haverá a troca
        if ((*msgDepois)[i] == charAntes)
        {
            (*msgDepois)[i] = charDepois;

            //Aumenta o contador de trocas feitas
            qtdTrocas++;
        }

    }
    
    //Retorna o número de trocas, a string de saída já definida na main será alterada pelo ponteiro
    return qtdTrocas;

}