/* 
Aula:		2 	
Finalidade:	Ao final do sistema, pausar. Mudar o idioma para o Português
*/

#include <stdio.h>
//Declaração da biblioteca de entrada e saída padrão
#include <stdlib.h>
//Declaração da biblioteca de entrada e saída padrão
#include<locale.h>
main()
{
	//Este comando modifica o idioma para o padrão Português
	setlocale(LC_ALL, "Portuguese");
	
	float P1,P2, mediaFinal;
	
	printf("\n Digite a nota da P1: \t");
	scanf("%f",&P1);
	
	printf("\n Digite a nota da P2: \t");
	scanf("%f",&P2);
	
	/*
		Realiza o cálculo da média. 
		lembre-se a linguagem C executa as expressões matemáticas 
		obedecendo as ordens de equações
	*/
	mediaFinal = (P1 + P2) /2;
	
	/*
		Podemos arredondar os número após a vírgula em números floats. 
		Basta inserir a quantidade de casas depois do caracter curinga.
		Sintaxe: %.2f - Exibirá 2 digitos após a vírgula.
	*/
	printf("\n Média final do aluno é: \t %.2f \n", mediaFinal);
	
	//Aguarda o usuário pressionar uma tecla, ao executar o arquivo "executável"
	system("pause");

}


