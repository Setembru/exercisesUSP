// Arthur Nobre Kuwahara || 26/05/2021
// Trab. 2 - Raiz quadrada (SSC0502)

#include <stdio.h>
#include <math.h>

int main(){
    int i;
    float r, E, aux;

    scanf("%f %d", &E, &i);

    r = aux = E/2;
    
    for (int j = 1; j < i; j++){
        r = (aux + E/aux)/2;
        aux = r;
    }
    
    printf("%f\n", r);
}