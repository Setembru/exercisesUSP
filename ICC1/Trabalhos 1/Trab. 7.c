// Arthur Nobre Kuwahara || 04/05/2021
// Trab. 7 - Vetor de divisores (SCC0502)
#include <stdio.h>
#include <math.h>

void fvet(int N, int *pn);

int main(){
    int v[20], n, i = 0, passa = 0;

    // Lendo o inteiro n
    scanf("%d", &n);

    // Chamando a função fvet()
    fvet(n, &v[0]);

    // Nesse caso, o 'passa' evitará que sejam impressos mais de 20 números e o if abaixo
    // evitará que não seja impresso o 1 como divisor, em caso de menos de 20 prints.
    while (v[i] > 1 && passa < 20){
        printf("%d ", v[i]);
        i++;
        passa++;
    }
    if (passa < 19)
        printf("%d", v[i]);

    return 0;
}

void fvet(int N, int *pn){
    int passador = 0;
    for (int i = N - 1; i > 0; i--){
        if (passador > 19)
            break;
        if (N % i == 0){
            *pn = i;
            pn++;
            passador++;
        }

    }
}
