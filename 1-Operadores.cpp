/*
	Solicite o dois números ao usuário. 
	Na Sequência, exiba as 4 operações aritmédicas realizadas pela Linguagem C.
*/

#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float numero1, numero2;
	
	printf("Operações Aritméticas: \n");
	
	printf("\nDigite o primeiro número: \t");
	scanf("%f",&numero1);
	
	printf("\nDigite o segundo número: \t");
	scanf("%f",&numero2);
	
	printf("\nSOMA: %.2f \t",numero1 + numero2);
	printf("\nSUBTRAÇÃO: %.2f \t",numero1 - numero2);
	printf("\nMULTIPLICAÇÃO: %.2f \t",numero1 * numero2);
	printf("\nDIVISÃO: %.2f \t",numero1 / numero2);
}
