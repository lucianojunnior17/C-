#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"portuguese");
	
	int gols[5], cont;
	
	for(cont=1; cont <=5; cont++ ){
		printf("\n Digite gols jogador %d:",cont);
		scanf("%d",&gols[cont]);
	}
	
	float mediagols =0;
	
	for(cont=1; cont <=5; cont++){
		mediagols = mediagols + gols[cont];		
	}
	mediagols = mediagols /5;	
}
