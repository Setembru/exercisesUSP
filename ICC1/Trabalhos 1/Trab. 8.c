// Arthur Nobre Kuwahara || 26/05/2021
// Trab. 8 - Vetor de múltiplos (SSC0502)

#include <stdio.h>
#include <stdlib.h>

void nElementos(int n, int *v);

int main(){
    int nn, i, *vp;

    scanf("%d", &nn);

    vp = (int *)calloc(nn,sizeof(int));

    nElementos(nn, vp);

    for (i = 0; i < nn; i++) printf("%d ", vp[i]);

    free(vp);
    return 0;
}

void nElementos(int n, int *v){
    int i;

    for (i = 1; i <= n; i++){
        *v = i*n;
        v++;
    }
}