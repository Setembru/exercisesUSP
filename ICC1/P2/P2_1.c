// Arthur Nobre Kuwahara || 23/07/2021
// P2 Ex. 1
/*
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
Crie uma função que recebe um vetor VET1 de 10 inteiros e um valor X.
Sendo N o número de elementos do vetor VET1 diferentes de X, essa função alocar dinamicamente um novo vetor
VET2 de tamanho N, que inclui somente os valores do vetor VET1 diferentes de X.

A função deve retornar o vetor VET2 e o valor de N.

Crie um programa (main) que executa os seguintes passos nessa ordem:
    Declare um vetor VET de 10 inteiros
    Leia os 10 valores que compõe o vetor VET1.
    Leia o valor de X
    Execute a função enviando o vetor VET1 e o valor X, e recebendo o vetor VET2 e o valor de N.
    Imprima os N valores do vetor VET2
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct saida {
    int *vetor;
    int tamanho;
} saida_t;

// Recebe um vetor vet1 e um valor x, retornando um vetor vet2
// apenas com os elementos de vet1 que não são x
saida_t filtrar_valor(int vet1[10], int x) {
    saida_t saida;

    // Vetor auxiliar
    int tmp[10];
    int i;
    // Número N
    saida.tamanho = 0;

    // Copiar os elementos para tmp
    for(i = 0; i < 10; i++) {
        if(vet1[i] != x) {
            tmp[saida.tamanho] = vet1[i];
            saida.tamanho++;
        }
    }

    // Alocar vet2 com o tamanho exato
    saida.vetor = (int *)malloc(sizeof(int)*saida.tamanho);
    if(saida.vetor == NULL) {
        printf("Erro ao alocar vet2\n");
        return saida;
    }

    for(int i = 0; i < saida.tamanho; i++) {
        saida.vetor[i] = tmp[i];
    }

    return saida;
}

int main() {
    int vet1[10], x, i;

    for(i = 0; i < 10; i++) {
        if(scanf("%d", &vet1[i]) != 1) {
            printf("Não foi possível ler elemento do vetor\n");
            return 1;
        }
    }

    if(scanf("%d", &x) != 1) {
        printf("Não foi possível ler X\n");
        return 2;
    }

    saida_t saida = filtrar_valor(vet1, x);

    for(i = 0; i < saida.tamanho; i++) {
        printf("%d ", saida.vetor[i]);
    }
    printf("\n");

    free(saida.vetor);
}