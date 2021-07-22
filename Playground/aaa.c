#include <stdio.h>
void main () {
    FILE *arq;
    int i, n;
    if((arq=fopen("test.txt", "w+"))==NULL)
    printf("\nErro abrindo arquivo.\n");
    for(i=0; i<5; i++) {
        scanf("%d", &n);
        fprintf(arq, "%d\n", n);
    }
    fclose(arq);
}