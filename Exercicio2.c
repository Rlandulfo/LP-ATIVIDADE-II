#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int main ()
{

setlocale(LC_ALL, "portuguese");
// Variaveis : 
int dia;
float valorCompra;
float desconto;
float valorTotal;

// Exigindo os dados de compra 

printf ("informe o preço da compra: ");
scanf ("%f", &valorCompra);

printf ("Informe o Dia da semana digitando 1 para dia da semana e 2 para Fim de semana: ");
scanf ("%d", &dia);

switch(dia){
case 1:
	if (valorCompra > 100)
	{
		desconto = valorCompra * 0.10;
	valorTotal = valorCompra - desconto;
	printf("Valor total da compra: %f", valorTotal);
	
}else { printf("Valor total da compra: %f", valorCompra);
	
} break; 
case 2:
if (valorCompra > 100){
	
desconto = valorCompra * 0.15;
valorTotal = valorCompra - desconto;
printf("Valor total da compra: %f", valorTotal);
}else {
printf("Valor total da compra: %f", valorCompra);	
}break;
}



    return 0;
}
