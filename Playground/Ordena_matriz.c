#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordenaMatriz(int n, int mat[n][n]){
    int i, j, l, c;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            
            for (l = 0; l < n; l++) {
                for (c = 0; c < n; c++) {
                    
                    if (mat[i][j] < mat[l][c]) {
                        int aux = mat[i][j];
                        mat[i][j] = mat[l][c];
                        mat[l][c] = aux;
                    }
                }
            }
        }
    }
}

void main(){
    
    int i, j, n = 5, mat[n][n];
    
    srand(time(NULL));
    
    printf("\n ORDENACAO DE MATRIZES\n");
    
    printf("\n\n Ordem Inicial:\n\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            mat[i][j] = rand() % 99 + 1;
            printf(" %02d", mat[i][j]);
        }
        printf("\n");
    }
        
    ordenaMatriz(n, mat);
    printf("\n\n Apos Ordenacao:\n\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf(" %02d", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n\n ");
    system("pause");
}
