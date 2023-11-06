#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int main ()
{

setlocale(LC_ALL, "portuguese");
// Variaveis : 

int roupas; 

// solicitando dados... 

printf ("Escolha o produto que Deseja:\n 1- Camisa \n 2- Calça \n 3-Sapato \n ");
scanf ("%d", &roupas);

switch (roupas) 
{

	case 1: 
	printf ("Camisa 25,00 R$ ");
	break;
	case 2:
	printf ("Calça 45,00 R$");
	break; 
	case 3:
		printf ("Sapato 56,00 R$");
	break;
}
	
	

    return 0;
}
