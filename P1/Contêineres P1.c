// Arthur Nobre Kuwahara - nUSP: 12563672
// Dia 15 de junho de 2021
// SSC0501 Turma01
/*
    Suponha que uma empresa de transporte trabalhe com contêineres medindo A metros de largura, B metros de comprimento e C metros de altura.
    Um navio porta-contêineres pode ser visto como um retângulo horizontal de X metros de largura e Y metros de comprimento,
e limite de Z metros de altura, sobre o qual os contêineres são colocados. Nenhuma parte de contêiner pode ficar para fora do navio.
    Os contêineres só podem ser colocados sobre o navio de tal forma que a largura e o comprimento do contêiner estejam paralelos à largura e
ao comprimento do navio.
    Crie um programa que leia os valores de X, Y, Z e A, B, C (valores decimais, nessa ordem). Calcule e imprima a quantidade máxima de
contêineres que o navio consegue transportar.
*/

#include <stdio.h>

int main() {
    int larg = 0, comp = 0, alt = 0;
    float X, Y, Z, A, B, C;
    int total;

    // Entradas
    scanf("%f", &X);
    scanf("%f", &Y);
    scanf("%f", &Z);
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    // Mantendo os valores de A, B e C para não perder o valor inicial
    int newA = A, newB = B, newC = C;

    // Quantos contêineres contém paralelos à largura?
    while (newA <= X) {
        larg++;
        newA += A;
    }

    // Quantos contêineres contém paralelos ao comprimento?
    while (newB <= Y) {
        comp++;
        newB += B;
    }

    // Quantos contêineres contém paralelos a altura?
    while (newC <= Z) {
        alt++;
        newC += C;
    }
    
    total = larg*comp*alt;
    printf("%d", total);

    return 0;
}