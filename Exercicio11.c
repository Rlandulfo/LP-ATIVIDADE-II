#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int main ()
{

setlocale(LC_ALL, "portuguese");
float codigo; 
do
{
    printf ("Digite o Codigo de Acesso:\n ");
scanf ("%f", &codigo);
if (codigo != 666)
{
     printf ("Acesso Negado! Tente Novamente!\n"); 
}else {
printf ("Acesso Permitido! ");
}

} while (codigo != 666 );

    return 0;
}