#include <stdio.h>
#include <math.h>

void main(){
    int A, B, C, st, nd, rd;

    /* Entrada */
    printf("Escreva o  valor A: ");
    scanf("%d", &A);
    printf("Escreva o  valor B: ");
    scanf("%d", &B);
    printf("Escreva o  valor C: ");
    scanf("%d", &C);
    
    /* Primeiro número */
    if (A <= B && A <= C)
        st = A;
    else if (B <= A && B <= C)
        st = B;
    else
        st = C;
    
    /* Segundo e Terceiro */
    if (st == A) {
        if (B < C) {
            nd = B;
            rd = C;
        }
        else {
            nd = C;
            rd = B;
        }
    }

    if (st == B) {
        if (A < C) {
            nd = A;
            rd = C;
        }
        else {
            nd = C;
            rd = A;
        }
    }

    if (st == C) {
        if (A < B) {
            nd = A;
            rd = B;
        }
        else {
            nd = B;
            rd = A;
        }
    }

    /* Saída */
    printf("%d, %d, %d.", st, nd, rd);
    return;
}