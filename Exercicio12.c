#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int main ()
{

setlocale(LC_ALL, "portuguese");
int qtdNotas;
int i;
float nota; 
float soma = 0;
float media;

    // Exigindo dados... 
    printf("Digite a quantidade de notas: ");
    scanf("%d", &qtdNotas);

    for (i = 1; i <= qtdNotas; ++i) {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);

        soma += nota;
    }

    media = soma / qtdNotas;

    printf("A media das notas digitadas e: %.2f\n", media);

    return 0;
}