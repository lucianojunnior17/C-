/*
	Aula 6: Escreva um programa que imprima �Errou, tente novamente...� na tela enquanto o caractere �q� n�o for digitado pelo
		usu�rio (portanto, condi��o de sa�da com caractere) e conte quantas repeti��es foram realizadas
*/
#include<stdio.h>
#include<stdlib.h>

main()
{
	int contador=0; // contador inicializado com valor zero - sempre recomend�vel
	char letra;
	
	
	// fun��o getchar( ) captura o caractere digitado
	while (letra=getchar() != 's') 
	{
		printf("Errou, tente novamente... \n");
		fflush(stdin);
		contador++; 
	}
	printf("Tentativas = %d \n", contador);
	system("PAUSE");
}

