# include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{

setlocale(LC_ALL, "Portuguese");

float base, altura ,areatriangulo;
printf("\n Calculo �rea do tri�ngulo \n");

printf("\n Digite a base \n");

scanf("%f",&base);

printf("\n Digite a Altura \n");

scanf("%f",&altura);

areatriangulo = (base * altura)/2;

printf("\n A �rea do tri�ngulo � : \%.2f \n",areatriangulo);

printf("\n Programa Finalizado!\n");

system("pause");

}

