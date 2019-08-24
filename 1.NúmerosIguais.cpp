/*
	Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os
	dois números forem iguais, imprima a mensagem “Números iguais”.
*/
#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h>

main() 
{ 
	setlocale(LC_ALL, "Portuguese");
	
	int N1, N2;
	
    printf("Descobrindo o maior número \n\n");
    
    printf("Digite o primeiro número (N1): ");
    scanf("%d", &N1);

    printf("Digite o segundo número (N2): ");
    scanf("%d", &N2);
    
    if(N1==N2)
    {
    	puts("Números iguais");
	}
	else
	{
		if(N1>N2)
		{
			puts("N1 maior do que o N2!");
		}
		else
		{
			puts("N2 maior do que o N1!");
		}
	}
    
	system("pause"); 
} 
