/*
	Solicite o dois n�meros ao usu�rio. 
	Na Sequ�ncia, exiba as 4 opera��es aritm�dicas realizadas pela Linguagem C.
*/

#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float numero1, numero2;
	
	printf("Opera��es Aritm�ticas: \n");
	
	printf("\nDigite o primeiro n�mero: \t");
	scanf("%f",&numero1);
	
	printf("\nDigite o segundo n�mero: \t");
	scanf("%f",&numero2);
	
	printf("\nSOMA: %.2f \t",numero1 + numero2);
	printf("\nSUBTRA��O: %.2f \t",numero1 - numero2);
	printf("\nMULTIPLICA��O: %.2f \t",numero1 * numero2);
	printf("\nDIVIS�O: %.2f \t",numero1 / numero2);
}
