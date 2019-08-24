/* 
Aula: 4 	

Escreva um programa que, dada a idade e o nome de um jogador de futebol, o classifique em uma das
seguintes categorias:

Categoria - Idade:
Fraldinha	- menores que 5
Infantil A 	- 5-7
Infantil B 	- 8-10
Juvenil A 	- 11-13
Juvenil B 	- 14-17
Profiça  	- maiores de 18
*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variáveis
	char nome[100];
	int idade;

	printf("*** Escolinha de futebol - ESAMC *** \n \n");
	
	printf("Digite o nome do jogador: ");
	gets(nome);
	
	printf("Digite a idade do jogador: ");
	scanf("%d",&idade);
	
	if (idade < 5)
	{
		puts("Fraldinha");
	}
	else if (idade >=5 && idade<=7)
	{
		puts("Infantil A");
	}
	else if (idade >8 && idade<=10)
	{
		puts("Infantil B");
	}
	else if (idade >=11 && idade<=13)
	{
		puts("Juvenil A");
	}
	else if (idade >=14 && idade<=17)
	{
		puts("Juvenil A");
	}
	else
	{
		puts(" Nível 'Profiça' '");
	}
}

