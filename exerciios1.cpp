#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"portuguese");
	
	int j1, j2, j3, j4, j5;
	
	printf("\n Digite a quantidade de gols do Jogador 1: ");scanf("%d",&j1);
	printf("\n Digite a quantidade de gols do Jogador 2: ");scanf("%d",&j2);
	printf("\n Digite a quantidade de gols do Jogador 3: ");scanf("%d",&j3);
	printf("\n Digite a quantidade de gols do Jogador 4: ");scanf("%d",&j4);
	printf("\n Digite a quantidade de gols do Jogador 5: ");scanf("%d",&j5);
	
	
	float mediaGols = (j1 + j2 + j3 + j4 + j5) /5;
	
	printf("\n média de gols Campeonato: %.2f", mediaGols);
	
	if(j1 >= mediaGols)	printf("\n Jogador 1");
	if(j2 >= mediaGols) printf("\n jogador 2 ");
	if(j3 >= mediaGols) printf("\n jogador 3 ");
	if(j4 >= mediaGols) printf("\n jogador 4 ");
	if(j5 >= mediaGols) printf("\n jogador 5 ");
	
	printf("\n Fim do Programa !!");
}
