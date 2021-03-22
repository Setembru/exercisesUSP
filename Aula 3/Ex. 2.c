#include <stdio.h>
#include <math.h>

int main(){
    int num, soma;
    printf("Insira o numero: ");
    scanf("%d", &num);
    soma = (num*3 + 1) + (num*2 - 1);
    printf("\nA soma eh: %d", soma);
    getch();
    return 0;
}