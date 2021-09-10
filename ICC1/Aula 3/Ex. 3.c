// Arthur Nobre Kuwahara || 15/06/2021
#include <stdio.h>

void main(){
    float MP, P[3];
    float MT, T[2];
    float MFinal;

    printf("Prova ");
    for (int i = 0; i < 3; i++){
        scanf("%f", &P[i]);
    }
    
    printf("Trabalho ");
    for (int i = 0; i < 2; i++){
        scanf("%f", &T[i]);
    }

    // Cálculo
    MP = (2*P[0] + 3*P[1] + 3*P[2])/8;
    MT = (T[0] + T[1])/2;
    MFinal = (7*MP + 3*MT)/10;

    // Saídas
    printf("Media da prova: %.2f\n", MP);
    printf("Media do trabalho: %.2f\n", MT);
    printf("Media final: %.2f\n", MFinal);
}