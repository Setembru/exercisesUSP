#include <stdio.h>
#include <math.h>

int main(){
    int l, a;
    printf("Digite o comprimento do lado em cm: ");
    scanf("%d", &l);
    a = l*l;
    printf("A area eh: %d cm^2", a);
    getch();
    return 0;
}