#include <stdio.h>
#include <math.h>

int main(){
    int l, area, perimetro;
    printf("Digite o comprimento do lado em cm: ");
    scanf("%d", &l);
    perimetro = 4*l;
    area = l*l;
    printf("%d %d", area, perimetro);
    return 0;
}