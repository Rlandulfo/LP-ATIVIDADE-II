#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int main ()
{

setlocale(LC_ALL, "portuguese");
// Variaveis : 
float notaAluno;
char class[250];


// Exigindo a nota do usuario: 

printf ("Digite sua Nota: ");
scanf ("%f", &notaAluno);

if (notaAluno >=9)
{
	strcpy (class,"EXCELENTE");
}

else if (notaAluno >=7 && notaAluno <9) {

	strcpy (class,"BOM");
}

else if(notaAluno >=5 && notaAluno <7) 
{
strcpy (class,"RAZOAVEL");
}

else
{
	strcpy (class,"INSUFICIENTE");
}

printf ("CLASSIFICAÇÃO DA NOTA: %s", class);



    return 0;
}
