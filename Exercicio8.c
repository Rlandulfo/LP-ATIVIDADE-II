#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale(LC_ALL, "portuguese");
//Variaveis... 

    int numero;
//Exigindo dados 
    printf("Digite um número: ");
    scanf("%d", &numero);
// condicional
    while (numero >= 0) {
            switch (numero) {
            case 0:
            break;
            default:
                printf ("%d\n", numero);
            break;
            }
        numero = numero - 1;
        }

    return 0;
}