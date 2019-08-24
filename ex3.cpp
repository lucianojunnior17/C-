#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variáveis
	
	
	int p1,p2,media,nota;
	
	printf("Digite a Nota da P1 \t"); scanf("%f",&p1);
	printf("Digite a Nota da P2 \t"); scanf("%f",&p2);
	
	media = (p1+p2) /2;
	
	printf("\n Média : \t %.2f",media);
	
	switch(media){
		case 0: case 2: puts("A "); break;
		case 3: case 4: puts("D");break;
		case 5: case 6: puts("C");break;
		case 7: case 8: puts("B"); break;
		case 9: case 10: puts("A"); break;
			default:puts("Reprovado");
		}
	
}
