#include<stdio.h>
#include<stdlib.h>
#include<locale.h>



main() {
	
	setlocale (LC_ALL,"portuguese");
	
	int numero,contador=0;
	
	printf("\n  Informe um n�mero de 1 a 5:*Numeros diferentes ser� solicitado um novo valor");
	scanf("%d",&numero);
	
	while(numero <1 ||numero >5)
	{
		printf("\n O valor do n�mero esta incorreto. Por favor tente novamente");
		scanf("%d",&numero);
		contador++;
		
		}
		printf("Voce tentou executar %d vezes.",contador);
		
		}
		
