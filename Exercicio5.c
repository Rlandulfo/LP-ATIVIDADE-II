#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int main ()
{

setlocale(LC_ALL, "portuguese");
// Variaveis : 

int idioma; 

// solicitando dados... 

printf ("Escolha o Idioma que Deseja:\n 1- Ingl�s \n 2- Espanhol \n 3-Fr�nces \n ");
scanf ("%d", &idioma);

switch (idioma) 
{

	case 1: 
	printf ("Welcome to the software development team!");
	break;
	case 2:
	printf ("Bienvenido al equipo de desarrollo de software!");
	break; 
	case 3:
		printf ("Bienvenue dans l'�quipe de d�veloppement de logiciels !");
	break;
}
	
	

    return 0;
}
