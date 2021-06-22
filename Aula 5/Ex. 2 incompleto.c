// Arthur Nobre Kuwahara || 27/05/2021
// Ex. 5.2 Notas e médias

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    float porc = 0, temp, maior, menor, media;
    int altas = 0, baixas = 0;

    scanf("%f", &temp);
    // Média está aqui pois está recebendo o seu primeiro valor
    media = maior = menor = temp;

    // Primeiro teste de maiores e menores notas
    if (temp >= 5)
        altas = altas + 1;
    else if (temp < 0)
        printf("Enois\n");
    else if (temp < 5 && temp >= 0)
        baixas = baixas + 1;

    while (temp >= 0){
        scanf("%f", &temp);

        // Maior e menor nota
        if (temp > maior)
            maior = temp;
        else if (temp < menor){
            if (temp < 0)
                exit(0);
            else
                menor = temp;
        }
        // Teste de maiores e menores notas
        if (temp >= 5)
            altas = altas + 1;
        else
            baixas = baixas + 1;

        media = media + temp;
    }

    media = media/(altas + baixas);
    // Por algum motivo a expressão porc = (altas/(altas+baixas))*100 não funciona.
    porc = altas;
    porc = porc/(altas+baixas);
    porc = porc*100;

    printf("\n%d %d %f %f", altas, baixas, media, porc);
    return 0;
}