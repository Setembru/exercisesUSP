// Arthur Nobre Kuwahara || 22/07/2021
// Ex. 13.2 
/*
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void funcAloca(int n){
    int *p;

    p = (int *)malloc(n*sizeof(int));
    
    for(int i = 0; i < n; i++)
        scanf("%d", &p[i]);
}

void vetInt(int *v){
    return ;
}

int main(){
    srand(time(NULL));
    


    return 0;
}