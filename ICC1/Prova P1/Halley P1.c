// Arthur Nobre Kuwahara - nUSP: 12563672
// Dia 15 de junho de 2021
// SSC0501 Turma01
/*
    O cometa Halley é um dos cometas de menor período do Sistema Solar, completando uma volta em torno do Sol a cada 76 anos.
A última ocasião em que ele tornou-se visível do planeta Terra foi no ano de 1986.
    Crie um programa que, dado um determinado ano (igual ou maior do que 2021),
mostra qual o próximo ano em que o cometa Halley será visível novamente do planeta Terra.
 */

#include <stdio.h>
#include <math.h>

int main() {
    int ano, i;

    // Entrada
    scanf("%d", &ano);
    i = ano;
    // Teste
    if (ano < 2021)
        // Deve ser maior ou igual a 2021
        printf("ERRO");
    else {
        // Teste para ver qual o próximo ano que o cometa Halley passará a partir do ano digitado.
        while (((i - 1986) % 76) != 0) {
            i++;
        }
    }
    // Retornando false, i será igual ao ano do cometa Halley e será printado
    printf("%d", i);
    return 0;
}