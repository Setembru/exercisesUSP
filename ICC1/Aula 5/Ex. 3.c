#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main() {
    int x, y, n, sum;

    // Entrada
    printf("Insira o numero x: ");
    scanf("%d", &x);

    printf("Insira o numero y: ");
    scanf("%d", &y);

    // A DECIDIR
    if (x >= y) {
        printf("ERRO");
        exit(0);
    } 
    else {
        for (int i = x + 1; i <= y; i++){
            x += i;
        }
    }
    printf("%d", x);
}