#include "TrocaChar.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int qtdTrocas;
    char charAntes[1];
    char charDepois[1];
    char *msgAntes;
    char *msgDepois;

    msgAntes = (char *)malloc (256 * sizeof(char));

    scanf("%s", msgAntes);
    scanf(" %c", charAntes);
    scanf(" %c", charDepois);

    qtdTrocas = TrocaChar(&msgAntes, strlen(msgAntes), charAntes[0], charDepois[0], &msgDepois);

    printf("%s", msgDepois);
    printf("\n%s", msgAntes);
    printf("\n%d", qtdTrocas);

    return 0;
}