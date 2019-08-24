#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {	
	
	setlocale(LC_ALL,"portuguese");
	
	//variaveis
	
	char nome[80];
	int idade;	
	
	
	//entrada de dados
	
	puts("Digite o Nome do jogador");
	 gets(nome);
	
	puts("Digite a idade do Jogador");
	scanf("%d",&idade) ;
	
	system("cls");
	
	puts("relatórios dos jogadores");
	printf("Nome do Jogador: %s \n",nome);
	printf("idade .........: %d \n",idade);
	
	//Condição
	
	if (idade < 5 )
	{
			puts("Categoria: Fraldinha");
		}
		else if (idade >= 5 && idade <= 7)
		{
			puts("Cateoria: Infantil A");
		}
		else if (idade >=8 && idade <=10)
		{
			puts("Categoria: infantil B");
		}
		else if (idade >10 && idade <14)
		{
			puts("Categoria: juvenil A");
			
		} 
		else if (idade > 14 && idade <=17)
		{
			puts("Categoria juvenil B");			
		}
		else 
		{
			puts("Categoria profissional");
		}
	
	
}
