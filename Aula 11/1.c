// Arthur Nobre Kuwahara || 22/07/2021
// Ex. 11.1

#include <stdio.h>

void main(){
    int l, c;

    // Usuário entra o número de linhas e colunas
    scanf("%d %d", &l, &c);
    int m[l][c];

    // Escrevendo a matriz da forma que cada elemento seja o produto entre sua linha e coluna
    for(int i = 0; i < l; i++)
        for(int j = 0; j < c; j++)
            m[i][j] = (i + 1)*(j + 1);

    // Printando a matriz
    for (int a = 0; a < l; a++){
        for (int b = 0; b < c; b++)
            printf("%d ", m[a][b]);
        printf("\n");
    }
}