#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale(LC_ALL, "portuguese");
int numero;
int i; 
int ePrimo = 1; 

    //Exigindo dados 
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    for (i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            ePrimo = 0; 
            break;
        }
    }

    if (ePrimo) 
    {
        printf("o Numero é primo\n");
    } else 
    {
        printf("o Numero nao é primo\n");
    }

    return 0;
}
