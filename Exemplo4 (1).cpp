#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
	int tabuada, contador=1, contadorErro=0;
	
	printf("\n Programa da Tabuada.");
	
	printf("\n N�meros v�lidos.. 1 at� 10.");
	printf("\n Digite o n�mero da tabuada: ");
	scanf("%d", &tabuada);
	
	while(tabuada < 1 || tabuada > 10)
	{
	
		printf("\n Errado. Tente outro n�mero: ");
		scanf("%d", &tabuada);
		contadorErro++;
		printf("\n N�mero de tentativas: %d \n", contadorErro);	
	}
	
	while(contador <= 10)
	{
		printf("\n %d  x  %d  =  %d",contador, tabuada,contador*tabuada);
		contador++;
	}
	
	printf("\n Fim da tabuada!");
}






