#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int mes;
	
	printf("\n Digite o n�mero do m�s 1..12 : ");
	scanf("%d",&mes);
	
	switch(mes)
	{
		case 2: 
			printf("\n M�s possui 28 dias."); 
			break; 
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: 
			printf("\n M�s possui 31 dias.");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("\n M�s possui 30 dias.");
			break;
		default: printf("\n Este n�o � um n�mero v�lido para o m�s!");
	}
}
