// Arthur Nobre Kuwahara || 22/07/2021
// Ex. 12.2
/*
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
Escreva uma função que dado um número real passado como parâmetro, retorne a parte inteira e
a parte fracionária deste número através de ponteiros.
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
*/

#include <stdio.h>

void flInt(float *p){
    int z;
    float r;

    z = (int) (*p);
    r = (*p) - z;
    
    printf("%d\n", z);
    printf("%f", r);
}

int main(){
    float real;

    scanf("%f", &real);

    flInt(&real);

    return 0;
}