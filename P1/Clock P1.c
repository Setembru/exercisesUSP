// Arthur Nobre Kuwahara - nUSP: 12563672
// Dia 15 de junho de 2021
// SSC0501 Turma01
/*
    Crie um programa que recebe o horário A (horas de 00 a 12 e minutos de 00 a 59) e o horário B (horas de 00 a 12 e minutos de 00 a 59),
lidos nessa ordem, e calcula a diferença entre os ponteiros das horas.
    Os ponteiros das horas se movem uniformemente a cada minuto. A diferença deve ser calculada do ponteiro das horas A até o ponteiro das horas B,
no sentido anti-horário, em graus (valor decimal e sempre positivo).
 */

#include <stdio.h>

int main() {
    float A, A1, B, B1, C, C1;

    // Entrada
    scanf("%f %f %f %f", &A, &A1, &B, &B1);

    // Definindo os graus
    C = B*30 - A*30;
    // Para cada minuto o ponteiro das horas se move meio grau
    C1 = B1*0.5 - A1*0.5;


    float degrees = C + C1;

    // Caso haja valor negativo no grau final.
    if (degrees < 0)
        degrees *= -1;
    // Caso os graus sejam maiores que um ângulo raso, ao invés de somar, subtraíremos de uma volta
    if (degrees > 180)
        degrees = 360 - degrees;

    // Saída
    printf("%f", degrees);

    return 0;
}