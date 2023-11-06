#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int main ()
{

setlocale(LC_ALL, "portuguese");
// Variaveis : 

int idade; 



// Exigindo a idade do usuario: 
printf ("Digite sua Idade: ");
scanf("%d", &idade);

if (idade >= 18)
{
	printf ("ACESSO PERMITIDO");
} else {
	printf ("ACESSO NEGADO");
}





    return 0;
}
