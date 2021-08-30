#include <stdio.h>

void troca(int *a, int *b);

int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    troca(&a, &b);
    printf("%d %d", a, b);

    return 0;
}

void troca(int *a, int *b){
    int aa = *a, bb = *b;

    *b = aa;
    *a = bb;
}