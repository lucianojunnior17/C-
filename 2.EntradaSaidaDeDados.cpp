/* 
Aula:		2 	
Finalidade:	Declaração de variáveis, métodos de entrada e saída de dados
*/

/* Declaração da biblioteca de entrada e saída padrão */
#include <stdio.h>

main()
{
	//Declaração de uma variável do tipo "Inteiro"
	int numero;
	
	//Declaração de uma variável do tipo "String"
	char string[30];
	
	//O comando scanf recebe os dados via teclado. Precisamos usar o caracter curinga (%)
	printf("Digite uma string: ");
	scanf("%s",string);
	
	printf("Digite um numero: ");
	scanf("%d",&numero);
	
	printf("A string digitada foi: \t %s \n", string);
	printf("O numero digitado foi: \t %d \n", numero);
}


