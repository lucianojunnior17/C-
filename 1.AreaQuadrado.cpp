/* 
Exercício:		1 	
Finalidade:		Faça um algoritmo para calcular a área do quadrado. 
				Em seguida, Exiba o resultado na tela. 
				Solicite ao usuário o valor do lado do quadrado. 
				Formula:  Área = Lado * Lado. 
				Exiba os seguintes dados:
				a.	Cálculo da área do quadrado
				b.	Digite o valor do lado: 
				c.	O Valor da Área do quadrado é: xxx
				d.	Programa finalizado!


*/

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float lado, areaQuadrado;
	
	printf("\n Cáluclo da área do Quadrado \n");
	
	printf("\n Digite o valor do lado: \t");
	scanf("%f",&lado);
	
	areaQuadrado = lado * lado;

	printf("\n A área do quadrado é: \t %.1f \n", areaQuadrado);
	
	printf("\n Programa Finalizado! \n");
	system("pause");
}


