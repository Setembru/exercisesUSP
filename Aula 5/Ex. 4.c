// Arthur Nobre Kuwahara - 15/06/2021
// Exercício: Ex. 5.4 Anos bissextos

#include <stdio.h>
#include <math.h>

void main() {
    int inicial, final;
    scanf("%d", &inicial);
    scanf("%d", &final);
    
    while (inicial <= final) {
        if ((inicial % 400 == 0) || (inicial % 4 == 0 && inicial % 100 != 0))
            printf("%d ", inicial);
        inicial++;
    }
}