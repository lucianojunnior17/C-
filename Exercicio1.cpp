#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float saldo=3000.00, valor;
	int opcao;
	do {
		printf("\n **************************");
		printf("\n 1. Deposito");
		printf("\n 2. Saque");
		printf("\n 3. Saldo");
		printf("\n 4. Sair");
		printf("\n Opção escolhida: ");
		scanf("%d", &opcao);
		
		switch(opcao){
		case 1: 
			printf("\n Insira o valor do depósito: ");
			scanf("%f", &valor);
			saldo+=valor;
			break;
		case 2: 
			printf("\n Insira o valor do saque:  ");
			scanf("%f", &valor);
			saldo-=valor;
			break;
		case 3: 
			printf("\n Saldo atual = R$ %.2f \n", saldo);
		break;
		default: 
			printf("\n Opcao Invalida! \n");
		}
	}while (opcao!=4);
	
	if (saldo <= 0)
	{
		puts(" Saldo NEGATIVO!");
	}
	printf("\n\n Fim do Sistema.");
}
