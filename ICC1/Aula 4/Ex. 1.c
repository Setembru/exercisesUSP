#include <stdio.h>
#include <math.h>

void main(){
    int dS, combs, cons;

    printf("Insira a distancia em quilometros (km): ");
    scanf("%d", &dS);
    printf("Insira quantos litros de gasolina, em litros (L), foram gastos: ");
    scanf("%d", &combs);

    cons = (dS/combs);
    printf("\nConsumo eh igual a %dkm/L", cons);

    if (cons < 8)
        printf("\nVenda o carro!");
    else if ((cons >= 8) && (cons <= 12))
        printf("\nEconomico!");
    else
        printf("\nSuper economico!");
    
    return;
}