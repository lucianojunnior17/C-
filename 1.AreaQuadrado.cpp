/* 
Exerc�cio:		1 	
Finalidade:		Fa�a um algoritmo para calcular a �rea do quadrado. 
				Em seguida, Exiba o resultado na tela. 
				Solicite ao usu�rio o valor do lado do quadrado. 
				Formula:  �rea = Lado * Lado. 
				Exiba os seguintes dados:
				a.	C�lculo da �rea do quadrado
				b.	Digite o valor do lado: 
				c.	O Valor da �rea do quadrado �: xxx
				d.	Programa finalizado!


*/

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float lado, areaQuadrado;
	
	printf("\n C�luclo da �rea do Quadrado \n");
	
	printf("\n Digite o valor do lado: \t");
	scanf("%f",&lado);
	
	areaQuadrado = lado * lado;

	printf("\n A �rea do quadrado �: \t %.1f \n", areaQuadrado);
	
	printf("\n Programa Finalizado! \n");
	system("pause");
}


