// Arthur Nobre Kuwahara - nUSP: 12563672
// Dia 15 de junho de 2021
// SSC0501 Turma01
/*
    Crie uma função que recebe um número inteiro positivo e retorna 1 se o número é especial, caso contrário, retorna 0.
    Crie o programa principal que lê um número, executa a função e imprime o retorno da função.
    Obs: Número especial é aquele que a soma dos seus divisores é igual ao próprio número.
    Ex: 6 é especial. 6 = 1 + 2 + 3.
*/

#include <stdio.h>

int special(int n);

int main() {
    int num;
    // Entrada
    scanf("%d", &num);
    // Saída
    printf("%d", special(num));
    return 0;
}

int special(int n) {
    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n)
        return 1;
    else
        return 0;
}