#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float valorDigitado, soma =0;
	int contador =1;
	
	while(contador <= 5)
	{
		printf("\n Digite o %d � n�mero: ", contador);
		scanf("%f", &valorDigitado);
		
		soma += valorDigitado;
		contador++;
	}
	
	printf("\n O resultado da soma �: %2.f",soma);
}
