
# include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{

setlocale(LC_ALL, "Portuguese");

float lado,areaquadrado;

printf("\n Cáculo da Área do Quadradro\n");

printf("\n Digite o valor do lado:\n");

scanf("%f",&lado);

printf("\n digite o valor do lado: \t");

scanf("%f",&lado);

areaquadrado = lado * lado;

printf("\n A área do quadrado é: %.2f\n" , areaquadrado);

printf("\n Programa Finalizado!\n");

system("pause");

}
