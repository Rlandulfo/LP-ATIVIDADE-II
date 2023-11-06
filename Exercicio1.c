#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int main ()
{

setlocale(LC_ALL, "portuguese");
// Variaveis : 

int temperatura; 
char clima[250]; 



// Solicitando Informações: 

printf ("Qual a Temperatura em Graus Celsius? ");
scanf ("%d", &temperatura);

// Condicional para Definição do clima 

if (temperatura >= 25)
{
    strcpy (clima, "ensolarado"); 
} else if (temperatura <= 15) 
{
  strcpy (clima, "chuvoso"); 
}else {
   strcpy (clima, "nublado"); 
}
printf ("Clima: %s", clima);

    return 0;
}
