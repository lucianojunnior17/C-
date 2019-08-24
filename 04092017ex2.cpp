#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {	
	
	setlocale(LC_ALL,"portuguese");
	
	//variaveis
	
	int  idade;
	char nome [80];
	char sexo;
	
	//entrada d dados 
	
	puts("digite O nome");
	gets(nome);

	puts("Digite a sua idade");
	scanf("%d",&idade);
	
	puts("Digite o seu sexo (F/M)");
	scanf(" %c",&sexo);
	
	
	//condição  +18 e Feminino
	
	if(idade >= 18 && (sexo =='F' || sexo == 'f'))
	{
		puts ("Entrada Permitida!!");
	}
	else
	{
		puts("Entrada NÃO é permitida !!");
		}	
	
	
}

