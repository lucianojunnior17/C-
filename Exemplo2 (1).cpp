/*
	Aula 6: Escreva um programa que imprima “Errou, tente novamente...” na tela enquanto o caractere “q” não for digitado pelo
		usuário (portanto, condição de saída com caractere) e conte quantas repetições foram realizadas
*/
#include<stdio.h>
#include<stdlib.h>

main()
{
	int contador=0; // contador inicializado com valor zero - sempre recomendável
	char letra;
	
	
	// função getchar( ) captura o caractere digitado
	while (letra=getchar() != 's') 
	{
		printf("Errou, tente novamente... \n");
		fflush(stdin);
		contador++; 
	}
	printf("Tentativas = %d \n", contador);
	system("PAUSE");
}

