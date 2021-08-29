// Arthur Nobre Kuwahara || 22/07/2021
// Ex. 6.1
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, xi = 1;

    scanf("%d %d", &x, &y);

    for (int i = 0; i < y; i++){
        xi *= x;
    }
    
    printf("%d", xi);

    return 0;
}