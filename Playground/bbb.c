#include <stdio.h>
#include <stdlib.h>

void main (){
    FILE *arq;
    int i, n;
    if((arq=fopen("test.txt", "r+"))==NULL)
    printf("\nErro abrindo arquivo.\n");
    for(i=0; i<5; i++) {
        fscanf(arq, "%d", &n);
        printf("%d\n", n);
    }
    fclose(arq);
    system("PAUSE");
} 