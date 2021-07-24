// Arthur Nobre Kuwahara || 23/07/2021
// P2 Ex. 4
/*
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
struct filme { char nome[20]; int avaliacao; int ano; };

Crie uma função que receba dois vetores (A e B) de 5 elementos do tipo “filme”, e copie as informações dos filmes com ano
de lançamento (ano) maiores ou iguais a 2000 do vetor A para o vetor B.

A função deve retornar o vetor B e o número N de filmes copiados de A para B. Ao final da cópia, somente os N elementos
do vetor B devem ser ocupados.

O programa (main) deve:
    Declarar os vetores A e B de 5 elementos do tipo “filme”
    Ler os valores dos filmes preenchendo o vetor A
    Executar a função
    Imprimir os títulos dos N filmes presentes no vetor B

Obs: Cada título de cada filme deve ser impresso em uma linha.
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
*/

#include <stdio.h>

struct filme {
    char nome[20];
    int avaliacao;
    int ano;
};

int copiar_filmes_recentes(struct filme A[5], struct filme B[5]) {
    int pos_saida = 0, pos; 

    // Para cada filme em A
    for (pos = 0; pos < 5; pos++) {
        // Caso o filme seja lançado a partir de 2000
        if (A[pos].ano >= 2000) {
            // Copiar para B
            B[pos_saida] = A[pos];
            // Aumentar contador
            pos_saida++;
        }
    }
    // Retornar quantos copiamos
    return pos_saida;
}

int main() {
    struct filme A[5], B[5];
    int pos, qtde_copiados;

    // Ler os 5 filmes
    for (pos = 0; pos < 5; pos++) {
        if (scanf("%s %d %d", A[pos].nome, &A[pos].avaliacao, &A[pos].ano) != 3) {
            printf("Não foi possível ler filme\n");
            return 1;
        }
    }

    // Copiar filmes lançados a partir de 2000
    qtde_copiados = copiar_filmes_recentes(A, B);

    // Imprimir esses
    for (pos = 0; pos < qtde_copiados; pos++) {
        printf("%s\n", B[pos].nome);
    }

    return 0;
}