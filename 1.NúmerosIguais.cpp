/*
	Fa�a um programa que leia dois n�meros e mostre o maior deles. Se, por acaso, os
	dois n�meros forem iguais, imprima a mensagem �N�meros iguais�.
*/
#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h>

main() 
{ 
	setlocale(LC_ALL, "Portuguese");
	
	int N1, N2;
	
    printf("Descobrindo o maior n�mero \n\n");
    
    printf("Digite o primeiro n�mero (N1): ");
    scanf("%d", &N1);

    printf("Digite o segundo n�mero (N2): ");
    scanf("%d", &N2);
    
    if(N1==N2)
    {
    	puts("N�meros iguais");
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
