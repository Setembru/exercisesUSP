// Arthur Nobre Kuwahara || 23/07/2021
// P2 Ex. 2
/*
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
Crie uma função que recebe uma frase S (incluindo espaços), uma palavra A e uma palavra B.
A função deve retornar o número de vezes que a palavra A parece em S e o número de vezes que a palavra B aparece em S.

Crie um programa main que leia as strings S, A e B, execute a função e imprima o número de vezes que a palavra A
parece em S e o número de vezes que a palavra B aparece em S.

Obs: A string S deve ser lida com o comando fgets da seguinte forma: fgets(S, 50, stdin);
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
*/

#include<stdio.h>
#include<string.h>

int contar_ocorrencias(char *frase, char *palavra) {
    int ocorrencias = 0;
    char *tmp = frase;

    while ((tmp = strstr(tmp, palavra))) {
        ocorrencias++;
        tmp++;
    }
    return ocorrencias;
}


int main() {
    char S[50];

    if (!fgets(S, 50, stdin)) {
        printf("Nao foi possivel ler S\n");
        return 1;
    }
    char A[50];
    if (scanf("%s", A) != 1) {
        printf("Nao foi possivel ler A\n");
    }; 
    char B[50];
    if (scanf("%s", B) != 1) {
        printf("Nao foi possivel ler B\n");
    }; 

    printf("%d %d\n", contar_ocorrencias(S, A), contar_ocorrencias(S, B));
}