#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numeroA, numeroB;
	
	printf("Digite o n�mero A: "); scanf("%d", &numeroA);
	printf("Digite o n�mero B: "); scanf("%d", &numeroB);
	
	while(numeroA < numeroB)
	{
		numeroA++;
		printf("%d  |  ",numeroA);
	}
}
