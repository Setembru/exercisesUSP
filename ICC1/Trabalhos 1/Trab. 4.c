// Arthur Nobre Kuwahara || 28/05/2021
// Trab. 4 - Menor e maior (SSC0502)

#include <stdio.h>

int main(){
    int m[5][5], a, x;


    // Inputing
    // Linhas
    for (int l = 0; l < 5; l++){
        // Colunas
        for (int c = 0; c < 5; c++){
            scanf(" %d", &a);
            m[l][c] = a;
        }
        
    }

    //Ordenação
    for (int iF = 0; iF < 5; iF++){
        for (int jF = 0; jF < 5; jF++){

            for (int kD = 0; kD < 5; kD++){
                for(int lD = 0; lD < 5; lD++){

                    if (m[iF][jF] < m[kD][lD]){

                        // Troca
                        x = m[iF][jF];
                        m[iF][jF] = m[kD][lD];
                        m[kD][lD] = x;
                    }
                }
            }
        }
    }

    // Printando
    /*
    for (int iO = 0; iO < 3; iO++){
        printf("\n");
        for (int jO = 0; jO < 3; jO++){
            printf("%d ", m[iO][jO]);
        }
    }
    */
   
    printf("%d %d", m[0][0], m[4][4]);
    
    return 0;
}