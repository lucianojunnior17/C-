#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variáveis
	
	int opcao;
	
	printf("\n Digite o valor");
	printf("\n [1] - Casado:");
	printf("\n [2] - Divorciado");
	printf("\n [3] - Solteiro");
	printf("\n [4] - Viúvo ");
	scanf("%d",&opcao);
	
	switch(opcao){
		case 1: puts("casado"); break;
		case 2: puts("Divorciado"); break;
		case 3: puts("Solteiro"); break;
		case 4: puts("Viúvo"); break;
		default : puts("Opção inválida");
	}

	}
		
	
