#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int main ()
{

setlocale(LC_ALL, "portuguese");
// Variaveis : 

int jogo; 

// solicitando dados... 

printf (" MENU \n 1- Novo Jogo \n 2- Carregar Jogo \n 3-Configurações \n \n ");
scanf ("%d", &jogo);

switch (jogo) 
{

	case 1: 
	printf ("Carregando Mundo, aguarde um instante...");
	break;
	case 2:
	printf ("Carregando dados do save");
    
	break; 
	case 3:
		printf ("CONFIGURAÇÕES \n 1- Graficos \n 2- Audio \n 3- Jogo \n 4-Ajuda \n");
	break;
}
	
    return 0;
}