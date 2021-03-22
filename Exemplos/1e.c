#include <stdio.h>
#include <math.h>

int main(){
    int num1, num2, media;
    printf("Digite 2 numeros: ");
    scanf("%d %d",&num1, &num2);
    media=(num1+num2)/2;
    printf("\nMedia: %d", media);
    getch();
    return 0;
}