// Arthur Nobre Kuwahara || 22/07/2021
// Ex. 13.1 
/*
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float mf = 0, *p;
    int n;

    scanf("%d", &n);

    p = (float *)malloc(n*sizeof(float));
    
    if(p == NULL){
        printf("Memoria insuficiente.\n");
        exit(1);
    }

    for(int i = 0; i < n; i++){
        scanf("%f", &p[i]);
        mf += p[i];
    }

    free(p);

    mf = mf/n;
    printf("\nMedia da sala: %.2f", mf);

    return 0;
}