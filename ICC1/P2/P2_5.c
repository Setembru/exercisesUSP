// Arthur Nobre Kuwahara || 23/07/2021
// P2 Ex. 5
/*
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
Crie um programa que abra um arquivo “filmes.dat”, leia (do teclado) uma palavra P, e imprima o título dos filmes
com ano de lançamento (ano) maior ou igual a 2000 e com a palavra P no título.
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
*/

#include <stdio.h>
#include <string.h>

struct filme {
    char nome[20];
    int avaliacao;
    int ano;
};

int main() {
    char P[20];
    struct filme tmp;

    // Abre o arquivo filmes.dat.
    FILE *arquivo = fopen("filmes.dat", "r+");
    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    // Leitura de P.
    if(scanf("%s", P) != 1) {
        printf("Erro ao ler P\n");
        return 2;
    }

    // Enquanto for possível ler, do arquivo, título dos filmes, o loop continuará.
    // fread() retorna a quantidade de títulos de filmes lidos.
    while(fread(&tmp, sizeof(struct filme), 1, arquivo) == 1) {
        // Impressão dos títulos dos filmes, com ano de lançamento acima de 1999, com a palavra P.
        if(tmp.ano >= 2000 && strstr(tmp.nome, P) != NULL) {
            printf("%s\n", tmp.nome);
        }
    }

    // Fecha o arquivo.
    fclose(arquivo);
}