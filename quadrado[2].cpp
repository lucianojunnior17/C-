
# include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{

setlocale(LC_ALL, "Portuguese");

float lado,areaquadrado;

printf("\n C�culo da �rea do Quadradro\n");

printf("\n Digite o valor do lado:\n");

scanf("%f",&lado);

printf("\n digite o valor do lado: \t");

scanf("%f",&lado);

areaquadrado = lado * lado;

printf("\n A �rea do quadrado �: %.2f\n" , areaquadrado);

printf("\n Programa Finalizado!\n");

system("pause");

}
