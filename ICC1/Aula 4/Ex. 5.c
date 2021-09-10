#include <stdio.h>
#include <math.h>

void main(){
    int A, B;
    char op;
    printf("Insert op: ");
    op = getchar();

    scanf("%d %d", &A, &B);
    printf("a = %d e b = %d\n", A, B);
    printf("op = %c\n", op);

    switch (op){
    case '+':
        printf("%d", A+B);
        break;
    case '-':
        printf("%d", A-B);
        break;
    case '*':
        printf("%d", A*B);
        break;
    case '/':
        printf("%d", A/B);
        break;
    default: printf("Nao eh operacao");
    }
}