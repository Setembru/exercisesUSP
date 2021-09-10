// Arthur Nobre Kuwahara || 26/05/2021
// Trab. 3 - Ordenação (SSC0502)

#include <stdio.h>
#include <math.h>

int main(){
    int v[10], a, x;

    // Inputing
    for (int i = 0; i < 10; i++){
        scanf("%d", &a);
        v[i] = a;
    }

    // Ordenando
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (v[i] < v[j]){
                x = v[i];
                v[i] = v[j];
                v[j] = x;
            }
        }
    }

    // Printando
    for (int i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }

    return 0;
}