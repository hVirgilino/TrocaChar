#include "TrocaChar.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    //Declaração de variáveis
    int qtdTrocas;
    char charAntes[1];
    char charDepois[1];
    char *msgAntes;
    char *msgDepois;

    //Aloca um tamanho de 256 bytes para o tamanho da string de entrada
    msgAntes = (char *)malloc (256 * sizeof(char));

    //Recebe as variáveis
    scanf("%s", msgAntes);
    scanf(" %c", charAntes);
    scanf(" %c", charDepois);

    //Chama a função
    qtdTrocas = TrocaChar(&msgAntes, strlen(msgAntes), charAntes[0], charDepois[0], &msgDepois);

    //Imprime o resultado
    printf("%s", msgDepois);
    printf("\n%s", msgAntes);
    printf("\n%d", qtdTrocas);

    return 0;
}