#include <stdio.h>
#include <math.h>

void main(){
    int major, minor, temp;
    
    printf("Digite a primeira nota para iniciar: ");
    scanf("%d", &temp);
    minor = major = temp;

    while (temp >= 0){
        if (temp > major)
            major = temp;
        else if (temp < minor)
            minor = temp;

        printf("Insira outra nota: ");
        scanf("%d", &temp);
    }
    
    printf("A maior nota foi %d e a menor foi %d.", major, minor);

    return;
}