/* 
Aula:		2 	
Finalidade:	Declara��o de vari�veis, m�todos de entrada e sa�da de dados
*/

/* Declara��o da biblioteca de entrada e sa�da padr�o */
#include <stdio.h>

main()
{
	//Declara��o de uma vari�vel do tipo "Inteiro"
	int numero;
	
	//Declara��o de uma vari�vel do tipo "String"
	char string[30];
	
	//O comando scanf recebe os dados via teclado. Precisamos usar o caracter curinga (%)
	printf("Digite uma string: ");
	scanf("%s",string);
	
	printf("Digite um numero: ");
	scanf("%d",&numero);
	
	printf("A string digitada foi: \t %s \n", string);
	printf("O numero digitado foi: \t %d \n", numero);
}


