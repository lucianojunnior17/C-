#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int contador=0;
	
	while(contador <= 3000){
		
		if (contador == 1000)
		{
			break;	
		}
			
		printf(" Eduardo - %d \n", contador);
		contador++;
	}
}
