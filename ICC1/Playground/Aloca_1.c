// Exemplo N1

#include <stdio.h>
#include <stdlib.h>

int main () {
    int *v, n, i;
    printf("Qual o tamanho do vetor que deseja:");
    scanf("%d", &n);
    v = (int *) calloc(n, sizeof(int)); // aloca um vetor de n posições inteiras
    for (i =0; i<n; i++){
        printf("Informe o %dº elemento: ", i+1);
        scanf("%d", &v[i]);     // armazena o valor no vetor na posição i 
    }
    for (i =0; i<n; i++)
        printf("%d ", v[i]);
    free(v);    // libera a memória alocada para o veto
    return 0;
}