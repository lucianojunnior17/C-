#include<stdio.h>
#include<stdlib.h>
#include<locale.h>



main() {
	
	setlocale (LC_ALL,"portuguese");
	
	int tabuada =1,contador =0;
	
	printf("Digite um número:");
	scanf("%d",&contador);
	
	switch (tabuada)
	{
		case 1: case 2: case 3: case 4: case 5: case 6: 
		case 7: case 8: case 9: case 10:
			
			while (contador <=10)
			{
				printf ("%d x %d = %d \n ",contador, tabuada, contador*tabuada);
				contador ++;
			}
		puts ("Fim da tabuada!");
			break;
			default :puts ("Opção inválida...");
		}
	}
	

