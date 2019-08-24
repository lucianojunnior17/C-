/* 
Aula:		2 	
Finalidade:	Ao final do sistema, pausar. Mudar o idioma para o Portugu�s
*/

#include <stdio.h>
//Declara��o da biblioteca de entrada e sa�da padr�o
#include <stdlib.h>
//Declara��o da biblioteca de entrada e sa�da padr�o
#include<locale.h>
main()
{
	//Este comando modifica o idioma para o padr�o Portugu�s
	setlocale(LC_ALL, "Portuguese");
	
	float P1,P2, mediaFinal;
	
	printf("\n Digite a nota da P1: \t");
	scanf("%f",&P1);
	
	printf("\n Digite a nota da P2: \t");
	scanf("%f",&P2);
	
	/*
		Realiza o c�lculo da m�dia. 
		lembre-se a linguagem C executa as express�es matem�ticas 
		obedecendo as ordens de equa��es
	*/
	mediaFinal = (P1 + P2) /2;
	
	/*
		Podemos arredondar os n�mero ap�s a v�rgula em n�meros floats. 
		Basta inserir a quantidade de casas depois do caracter curinga.
		Sintaxe: %.2f - Exibir� 2 digitos ap�s a v�rgula.
	*/
	printf("\n M�dia final do aluno �: \t %.2f \n", mediaFinal);
	
	//Aguarda o usu�rio pressionar uma tecla, ao executar o arquivo "execut�vel"
	system("pause");

}


