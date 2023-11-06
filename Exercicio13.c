#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int main ()
{

setlocale(LC_ALL, "portuguese");
int numero1; 
int numero2;
int soma=0;
int op; 

printf ("Digite o Primeiro Numero: ");
scanf ("%d", &numero1);

printf ("Digite o Segundo Numero: ");
scanf ("%d", &numero2);

printf ("Escolha uma Operação Digitando 1 para (+) e 2 para (-)");
scanf ("%d", &op);

switch (op)
{
case 1:
    soma = numero1 + numero2;
    printf ("Resultado da operação: %d", soma);
    break;

case 2:
soma = numero1 - numero2; 
printf ("Resultado da operação: %d", soma);
    break;
}
    return 0;
}