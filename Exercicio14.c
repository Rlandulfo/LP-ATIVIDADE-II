#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int main ()
{

setlocale(LC_ALL, "portuguese");
int numero; 
int contadorPar = 0; 
int contadorImpar = 0; 
int somaPares = 0; 
int somaImpares = 0;

    while (1) {
        printf("Digite um numero inteiro, ou digite um numero negativo para parar: ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        if (numero % 2 == 0) {
            contadorPar++;
            somaPares += numero;
        } else {
            contadorImpar++;
            somaImpares += numero;
        }
    }

    float mediaPares = (contadorPar > 0) ? (float)somaPares / contadorPar : 0;
    float mediaImpares = (contadorImpar > 0) ? (float)somaImpares / contadorImpar : 0;

    printf("Quantidade de numeros pares: %d\n", contadorPar);
    printf("Quantidade de numeros impares: %d\n", contadorImpar);
    printf("Media aritmetica dos numeros pares: %.2f\n", mediaPares);
    printf("Media aritmetica dos numeros impares: %.2f\n", mediaImpares);

    return 0;
}
