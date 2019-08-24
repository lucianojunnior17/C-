#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");
	int numero, contador=0, total=0;
	do{
		printf("\n Digite um número: ");
		scanf("%d", &numero);

		contador++;
		total += numero;
		
		printf("\n\n Digite [S] para continuar...");
		fflush(stdin);
	} while (getchar() == 's');

	printf("\n\n Repeticoes = %d Soma dos números = %d \n", contador, total);
	printf("\n\n FIM DO PROGRAMA!");
	
}
