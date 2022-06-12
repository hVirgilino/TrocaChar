#include "TrocaChar.h"
#include <stdio.h>
#include <stdlib.h>

int TrocaChar(char **msgAntes, int qtdCharVet, char charAntes, char charDepois, char **msgDepois){

    int qtdTrocas = 0;
    *msgDepois = (char *)malloc (qtdCharVet * sizeof(char));

    for (int i = 0; i <= qtdCharVet; i++)
    {
        (*msgDepois)[i] = (*msgAntes)[i];

        if ((*msgDepois)[i] == charAntes)
        {
            (*msgDepois)[i] = charDepois;

            qtdTrocas++;
        }

    }

    return qtdTrocas;

}