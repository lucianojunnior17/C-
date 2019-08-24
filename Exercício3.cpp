#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numeroA, numeroB;
	
	printf("Digite o número A: "); scanf("%d", &numeroA);
	printf("Digite o número B: "); scanf("%d", &numeroB);
	
	while(numeroA < numeroB)
	{
		numeroA++;
		printf("%d  |  ",numeroA);
	}
}
