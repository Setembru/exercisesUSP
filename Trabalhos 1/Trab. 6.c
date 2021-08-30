// Arthur Nobre Kuwahara || 02/05/2021
// Trab. 6 - Negativos/Positivos (SSC0502)

#include <math.h>

int main(){
    // Declaração variáveis
    int vet[10];
    
    // Entradas e evitando entradas negativas
    for (int i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
        if (vet[i] < 0) vet[i] *= -1;
    }
    // Impressões
    for (int i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}