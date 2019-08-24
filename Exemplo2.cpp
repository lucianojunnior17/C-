#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
	float valor1, valor2, resultado=0;
	int opcao;
	
	do{
		system("cls");
		printf("\n *** Calculatora Tabajara 2.000 ***");
		printf("\n [1] - Soma");
		printf("\n [2] - Subtração");
		printf("\n [3] - Divisão");
		printf("\n [4] - Multiplicação");
		printf("\n Opção escolhida: ");
		
		scanf("%d", &opcao);
		
		printf("\n Digite o primeiro valor: "); scanf("%f", &valor1);
		printf("\n Digite o segundo valor: "); scanf("%f", &valor2);
		
		switch(opcao){
			case 1: resultado = valor1 + valor2;break;
			case 2: resultado = valor1 - valor2;break;
			case 3: resultado = valor1 / valor2;break;
			case 4: resultado = valor1 * valor2;break;
			default: puts("Opção inválida");break;
		}
		
		printf("\n Resultado: %.2f", resultado);
		printf("\n\n Digite [S] para continuar...");
		fflush(stdin);
		
	}while(getchar()=='s' || getchar()=='S');
	
	puts("\n FIM DO PROGRAMA!");
}
