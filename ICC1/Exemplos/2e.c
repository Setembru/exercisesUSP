#include <stdio.h>

int main () {
    int num;
    printf ("Digite um numero: ");
    scanf ("%d",&num);
    if (num > 10){
        printf ("\n\n O numero eh maior que 10");
    }
    if (num == 10) {
        printf ("\n\n Voce acertou!\n");
        printf ("O numero eh igual a 10.");
    }
    if (num < 10) {
        printf ("\n\n O numero eh menor que 10");
    }
    return 0;
}