#include<stdio.h>
#include<locale.h>
#include<stdlib.h>


main() 
{
	setlocale(LC_ALL,"portuguese");
	

int vetor[10], c, s=0, m=1, sb=0;
float d=1;

for(c =0; c < 10; c++){
	printf("\n Digite um n�mero: [%d]", c);
	scanf("%d", &vetor [c]);
	s = s + vetor[c];
	m = m * vetor[c];
	sb = sb - vetor[c];
	d = d / vetor[c];
}

if (s >=0){
	printf("\n A Somat�ria � positiva: %d",s);
}else if(s < 0){
	printf("\n A somat�ria � negativa: %d",s);
	
	}
	if (m >=0){
	printf("\n A Multiplica��o � positiva: %d",m);
}else if(m < 0){
	printf("\n A multiplica��o � negativa: %d",m);
	
	}
	
	if (sb >=0){
	printf("\n A Subtra��o � positiva: %d", sb);
}else if(sb < 0){
	printf("\n A somat�ria � negativa: %d", sb);
	}
	
	
	if (d >=0){
	printf("\n A Divi�o � positiva: %d",d);
}else if(d < 0){
	printf("\n A Divis�o � negativa: %d",d);
	
	}
}
