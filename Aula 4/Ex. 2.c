#include <stdio.h>
#include <math.h>

void main(){
    float peso, alt, IMC;
    printf("Insira seu peso em quilogramas (kg): ");
    scanf("%f", &peso);
    printf("Insira sua altura em metros (m): ");
    scanf("%f", &alt);
    
    IMC = peso/(alt*alt);

    printf("Seu IMC eh %.2f", IMC);

    if (IMC <= 18.5)
        printf("\nAbaixo do peso");
    else if (IMC >= 18.6 && IMC <= 24.9)
        printf("\nSaudavel");
    else if (IMC >= 25.0 && IMC <= 29.9)
        printf("\nPeso em excesso");
    else if (IMC >= 30.0 && IMC <= 34.9)
        printf("\nObesidade Grau I");
    else if (IMC >= 35.0 && IMC <= 39.9)
        printf("\nObesidade Grau II");
    else
        printf("\nObesidade Grau III");
    return;
}