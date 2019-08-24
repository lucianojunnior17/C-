#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>


int verifica_vogal(char letra)
{
if(letra=='a' ||letra=='A' || letra=='e'|| letra=='E'
|| letra=='i' ||letra=='I' || letra=='o'|| letra=='O'
|| letra=='u' || letra=='U'||)
	return(1);
	else
	return(0);
}

void timber()
{
	puts("------------")
	puts("ESAMC - 2017");
	puts("Enegenharia");
	puts("Vai")
}
main() 
{
	timbre();
	char nome[80];
	int x,t;
	printf("\n Digite um nome: ");
	gets(nome);
	t=strlen(nome);
	for(x=0;x<=t-1;x++)
	{
		if(verifica_vogal(nome[x])==1 )
		printf("\n A Letra [%c] e uma VOGAL    :",nome[x]);
		else
		printf("\n A letra [%c] e uma CONSOANTE:",nome[x]);
	}
	system("pause");
	
}

