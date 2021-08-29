// Arthur Nobre Kuwahara || 28/05/2021
// Trab. 1 - MMC e MDC (SSC0502)
#include <stdio.h>

int main(){
    //Declaração de variáveis

	//Variáveis globais
    int n1, n2, n3, maior, menor;

    //Variáveis do MMC
    int i, mmc;

    //Variáveis do MDC
    int j, mdc;

    //Entradas
    scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);

	//Achando o maior número
	if (n1 >= n2 && n1 >= n3)
		maior = n1;
	else if (n2 >= n1 && n2 >= n3)
		maior = n2;
	else
		maior = n3;

	//Achando o menor número
	if (n1 <= n2 && n1 <= n3)
		menor = n1;
	else if (n2 <= n1 && n2 <= n3)
		menor = n2;
	else
		menor = n3;

	//Execução MDC
    for (i = 1; i <= menor; i++){
        if (n1 % i == 0 && n2 % i == 0 && n3 % i == 0)
            mdc = i;
	}

	//Execução MMC
    for (j = n1*n2*n3; j >= maior; j--){
        if (j % n1 == 0 && j % n2 == 0 && j % n3 == 0)
            mmc = j;
	}

    //Output
    printf("%d %d", mmc, mdc);
    return 0;
}