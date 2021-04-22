#include <stdio.h>
#include <math.h>

void main(){
    int major, minor, temp;
    float grade;
    int i = 0, j = 0;
    
    printf("Digite a primeira nota para iniciar: ");
    scanf("%d", &temp);
    grade = minor = major = temp;

    while (temp >= 0) {
        printf("Insira outra nota: ");
        scanf("%d", &temp);

        grade += temp;

        if (temp > major)
            major = temp;

        else if (temp < minor)
            minor = temp;

        if (temp >= 5)
            i += 1;
        else
            j += 1;
    }
    
    printf("\nA maior nota foi %d.", major);
    printf("\nA menor nota foi %d.", minor);
    printf("\nA quantidade de alunos com nota alta foi %d.", i);
    printf("\nA quantidade de alunos com nota baixa foi %d.", j);

    grade = grade/(i+j);

    printf("\nA media foi %.2f", grade);

    return;
}