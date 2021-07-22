// Arthur Nobre Kuwahara - nUSP: 12563672
// Dia 15 de junho de 2021
// SSC0501 Turma01
/*
    Crie um programa que imprima os N primeiros termos da seqüência de Fibonacci na ordem inversa, sendo N digitado pelo usuário.
    Ex. para N = 5, saída: 5 3 2 1 1
*/

#include <stdio.h>

int main() {
    int fibonacci;

    // Entradas
    scanf("%d", &fibonacci);

    // Vetor com os N números da ordem Fibonacci
    int v[fibonacci];

    // Sem isso o programa dá erro.
    v[fibonacci - 1] = v[fibonacci - 2] = 1;

    // -3 pois já consideramos os que são iguais a 1
    for (int i = fibonacci - 3; i >= 0; i--)
        // Fibonacci propriamente dito acontecendo
        v[i] = v[i + 1] + v[i + 2];

    // Printando as posições do vetor
    for (int i = 0; i < fibonacci; i++)
        printf("%d ", v[i]);

    return 0;
}