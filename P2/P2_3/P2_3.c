// Arthur Nobre Kuwahara || 23/07/2021
// P2 Ex. 3
/*
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
Crie um programa que abra um arquivo “texto.txt” já existente e leia (do teclado) uma palavra A e uma palavra B.
O programa deve imprimir quantas vezes a palavra B aparece imediatamente a frente da palavra A no texto.

Exemplo para desenvolvimento: no arquivo em anexo as palavras "t1"e "t2" aparecem 3 vezes nessa ordem.
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
*/

#include <stdio.h>

int comparar_strings(char *primeiro, char *segundo, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        // Caso encontremos final das duas strings, parar aqui.
        if (primeiro[i] == '\0' && segundo[i] == '\0') {
            break;
        }
        // Caso o caractere seja diferente, não é igual.
        if (primeiro[i] != segundo[i]) {
            return 0;
        }
    }
    // Se chegamos aqui, são iguais.
    return 1;
}

int main() {
    // Ler as duas palavras do input.
    char A[20];
    char B[20];

    if (scanf("%s %s", A, B) != 2) {
        printf("Erro ao ler as duas palavras\n");
        return 1;
    }

    FILE *arquivo = fopen("texto.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao ler o arquivo texto.txt\n");
        return 2;
    }

    // Quantas vezes as duas palavras apareceram em sequencia
    int ocorrencias = 0;
    // Se acabamos de verificar A
    int passou_primeiro_check = 0;
    // Buffer de palavra
    char palavra[20];
    // Ler as outras palavras
    while(fscanf(arquivo, "%s", palavra) == 1) {
        // Verificar contra a palavra A
        if (comparar_strings(palavra, A, 20)) {
            // Marcar que primeiro check deu certo
            passou_primeiro_check = 1;
        } else {
            // Caso a anterior tenha passado o check, e essa seja a B
            if (passou_primeiro_check && comparar_strings(palavra, B, 20)) {
                // Encontramos, incrementar
                ocorrencias++;
            }
            // Resetar check
            passou_primeiro_check = 0;
        }


    }
    fclose(arquivo);
    printf("%d\n", ocorrencias);
}