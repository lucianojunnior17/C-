#include<stdio.h>
#include<locale.h>
#include<stdlib.h>


main() 
{
	setlocale(LC_ALL,"portuguese");
	

int vetor[10], c, s=0, m=1, sb=0;
float d=1;

for(c =0; c < 10; c++){
	printf("\n Digite um número: [%d]", c);
	scanf("%d", &vetor [c]);
	s = s + vetor[c];
	m = m * vetor[c];
	sb = sb - vetor[c];
	d = d / vetor[c];
}

if (s >=0){
	printf("\n A Somatória é positiva: %d",s);
}else if(s < 0){
	printf("\n A somatória é negativa: %d",s);
	
	}
	if (m >=0){
	printf("\n A Multiplicação é positiva: %d",m);
}else if(m < 0){
	printf("\n A multiplicação é negativa: %d",m);
	
	}
	
	if (sb >=0){
	printf("\n A Subtração é positiva: %d", sb);
}else if(sb < 0){
	printf("\n A somatória é negativa: %d", sb);
	}
	
	
	if (d >=0){
	printf("\n A Divião é positiva: %d",d);
}else if(d < 0){
	printf("\n A Divisão é negativa: %d",d);
	
	}
}
