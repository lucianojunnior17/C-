/* 
Aula:		3 	
Finalidade:	Desenvolver um programa capaz de realizar o c�lculo da m�dia do aluno.
			O aluno dever� informar o nome completo, Prova1, Prova2, Pr�via1, Pr�via2 e
			o total de faltas no semestre.
			A composi��o da m�dia se dar� atrav�s do seguinte peso:
			Prova 1, peso 40%. Prova 2, peso 30% e cada Pr�via representa 15%.
			Se a m�dia for igual ou maior 7, o aluno estar� REPROVADO. Caso contr�rio, 
			a condi��o final � APROVADO.
			Se o total de faltas for superior a 12, o aluno automaticamente estar� reprovado. 
			
			Modelo da tela de entrada de dados:
			----------------------------------			
			Faculdade ESAMC - 2017
			----------------------------------
			*** Consulta de Notas & Faltas ***
			
			Nome do Aluno:	xxx
			Prova 1:		xxx
			Prova 2:		xxx
			Pr�via 1:		xxx
			Pr�via 2:		xxx
			Total Faltas:	xxx
			---------------------------------
			Tecle ENTER para gerar o boletim
			----------------------------------
			
			
			Modelo da tela de sa�da de dados:
			----------------------------------			
			Faculdade ESAMC - 2017
			----------------------------------
			*** Condi��o Final do aluno... ***
			
			Nome do Aluno:	yyy
			M�dia Final:	yyy
			Total Faltas:	yyy
			
			Situa��o Final:	yyyyy
			---------------------------------
			Fim da execu��o do sistema.
			----------------------------------
			
			OBS: A m�dia final dever� conter apenas 1 casa decimal.
		
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float prova1, prova2, previa1, previa2, mediaFinal;
	int faltas;
	char nome[80], status;

	puts(" ----------------------------------");
	puts(" Faculdade ESAMC - 2017");
	puts(" ----------------------------------");
	puts(" *** Consulta de Notas & Faltas ***");
	
	printf(" \n Nome: \t");
	gets(nome);
	
	printf("\n Prova 1: \t ");
	scanf("%f",&prova1);
	
	printf("\n Prova 2: \t ");
	scanf("%f",&prova2);
	
	printf("\n Pr�via 1: \t ");
	scanf("%f",&previa1);

	printf("\n Pr�via 2: \t ");
	scanf("%f",&previa2);

	printf("\n Faltas: \t ");
	scanf("%f",&faltas);

	puts(" ----------------------------------");	
	
	//Comando para limpar a tela
	system("cls");
	
	puts(" ----------------------------------");
	puts(" Faculdade ESAMC - 2017");
	puts(" ----------------------------------");
	puts(" *** Situa��o [Final] do Aluno ***");
	
	printf("\n Aluno: \t %s", nome);
	
	mediaFinal = (prova1*0.4) + (prova2*0.3) + (previa1*0.15) + (previa2*0.15);
	
	printf("\n M�dia Final: \t %.1f", mediaFinal);

	if((faltas > 12) || (mediaFinal <=7 ))
		printf("\n Situa��o Final: REPROVADO.");
	else
		printf("\n Situa��o Final: APROVADO.");
		
	
	printf("\n Fim da execu��o do sistema. \n");
	puts(" ----------------------------------");
	system("pause");
}
