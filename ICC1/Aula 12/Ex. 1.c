// Arthur Nobre Kuwahara || 22/07/2021
// Ex. 12.1
/*
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e
troque o seu conteúdo, ou seja, esta rotina é chamada passando duas variáveis A e B por
exemplo, e após a execução da rotina A conterá o valor de B e B terá o valor de A.
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
*/

#include <stdio.h>

void trocaAxB(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

int main(){
    int a, b;
    if (scanf("%d %d", &a, &b) != 2){
        printf("Nao foi possivel ler o numero de linhas e colunas\n");
        return 1;
    }
    trocaAxB(&a, &b);
    printf("%d %d", a, b);
    return 0;
}