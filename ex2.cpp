#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include<math.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variáveis
	
	int opcao;
	
	printf("\n Digite o número do Mês:");scanf("%d",&opcao);
		
	
	switch(opcao){
		case 1: puts("31 dias"); break;
		case 2: puts("28 DIAS"); break;
		case 3: puts("31 dias"); break;
		case 4: puts("30 Dias"); break;
		case 5: puts("31 dias"); break;
		case 6: puts("30 Dias"); break;
		case 7: puts("31 dias"); break;
		case 8: puts("31 dias"); break;
		case 9: puts("30 dias"); break;
		case 10:puts("31 dias"); break;
		case 11:puts("30 dias"); break;
		case 12:puts("31 dias"); break;
		default:puts("Opção inválida");
	}

	}
		
	
