/* 
Aula:		3 	
Finalidade:	Desenvolver um programa capaz de realizar o cálculo da média do aluno.
			O aluno deverá informar o nome completo, Prova1, Prova2, Prévia1, Prévia2 e
			o total de faltas no semestre.
			A composição da média se dará através do seguinte peso:
			Prova 1, peso 40%. Prova 2, peso 30% e cada Prévia representa 15%.
			Se a média for igual ou maior 7, o aluno estará REPROVADO. Caso contrário, 
			a condição final é APROVADO.
			Se o total de faltas for superior a 12, o aluno automaticamente estará reprovado. 
			
			Modelo da tela de entrada de dados:
			----------------------------------			
			Faculdade ESAMC - 2017
			----------------------------------
			*** Consulta de Notas & Faltas ***
			
			Nome do Aluno:	xxx
			Prova 1:		xxx
			Prova 2:		xxx
			Prévia 1:		xxx
			Prévia 2:		xxx
			Total Faltas:	xxx
			---------------------------------
			Tecle ENTER para gerar o boletim
			----------------------------------
			
			
			Modelo da tela de saída de dados:
			----------------------------------			
			Faculdade ESAMC - 2017
			----------------------------------
			*** Condição Final do aluno... ***
			
			Nome do Aluno:	yyy
			Média Final:	yyy
			Total Faltas:	yyy
			
			Situação Final:	yyyyy
			---------------------------------
			Fim da execução do sistema.
			----------------------------------
			
			OBS: A média final deverá conter apenas 1 casa decimal.
		
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
	
	printf("\n Prévia 1: \t ");
	scanf("%f",&previa1);

	printf("\n Prévia 2: \t ");
	scanf("%f",&previa2);

	printf("\n Faltas: \t ");
	scanf("%f",&faltas);

	puts(" ----------------------------------");	
	
	//Comando para limpar a tela
	system("cls");
	
	puts(" ----------------------------------");
	puts(" Faculdade ESAMC - 2017");
	puts(" ----------------------------------");
	puts(" *** Situação [Final] do Aluno ***");
	
	printf("\n Aluno: \t %s", nome);
	
	mediaFinal = (prova1*0.4) + (prova2*0.3) + (previa1*0.15) + (previa2*0.15);
	
	printf("\n Média Final: \t %.1f", mediaFinal);

	if((faltas > 12) || (mediaFinal <=7 ))
		printf("\n Situação Final: REPROVADO.");
	else
		printf("\n Situação Final: APROVADO.");
		
	
	printf("\n Fim da execução do sistema. \n");
	puts(" ----------------------------------");
	system("pause");
}
