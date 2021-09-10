#include <stdio.h>
#include <math.h>

void main(){
    int ano;
    printf("Insira o valor do ano: ");
    scanf("%d", &ano);
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
        printf("\nAno bissexto.");
    else
        printf("\nAno normal.");
    return;
}