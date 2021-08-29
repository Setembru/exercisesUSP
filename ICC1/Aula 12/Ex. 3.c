// Arthur Nobre Kuwahara || 22/07/2021
// Ex. 12.3 Vetor A com 20 inteiros...
/*
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void vetFunc(int *v){
    // Contadores
    int bcont = 0, ccont = 0, jj = 0, kk = 0;

    for(int i = 0; i < 20; i++)
        if(v[i] % 2 == 0)
            bcont++;

    ccont = 20 - bcont;

    // Vetores B e C
    int vetb[bcont], vetc[ccont];

    for(int i = 0; i < 20; i++)
        if(v[i] % 2 == 0){
            vetb[jj] = v[i];
            jj++;
        }

    for(int i = 0; i < 20; i++)
        if(v[i] % 2 != 0){
            vetc[kk] = v[i];
            kk++;
        }

    //Printing
    printf("VETOR A\n");
    for (int i = 0; i < 20; i++){
        printf("%d ", v[i]);
    }

    printf("\n\nVETOR B\n");
    for (int i = 0; i < bcont; i++){
        printf("%d ", vetb[i]);
    }

    printf("\n\nVETOR C\n");
    for (int i = 0; i < ccont; i++){
        printf("%d ", vetc[i]);
    }

    printf("\n\nElementos de B: %d.\n", bcont);
    printf("Elementos de C: %d.\n", ccont);
}

int main(){
    int a[20], aux;

    srand(time(NULL));

    for(int i = 0; i < 20; i++){
        aux = rand();
        a[i] = aux % 100;      
    }

    vetFunc(a);

    return 0;
}