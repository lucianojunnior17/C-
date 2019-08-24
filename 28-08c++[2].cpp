#include<stdlib.h>
#include<stdlib.h>
#include<locale.h>
main() {
	//declaração variavel
	
	setlocale(LC_ALL,"portuguese");
	
	float p1,p2,pr1,pr2,media;
	int faltas;
	char nome[80];
	
	//cabeçário programa
	
	puts("-------------------------------------");
	puts("------Faculdade ESAMC - 2017---------");
	puts("-------------------------------------");
	puts("**** Consulta de Notas e Faltas****");
	
	printf("\n Nome do Aluno \t"); gets(nome);
	
	printf("Digite a Nota da P1 \t"); scanf("%f",&p1);
	printf("Digite a Nota da P2 \t") ;scanf("%f",&p2);
	printf("Digite a Nota da Previa 1 \t"); scanf("%f",&pr1);
	printf("Digite a Nota da Prévia 2 \t"); scanf("%f",&pr2);
	printf("Digite o Número de faltas \t"); scanf("%d",&faltas);
	
	puts("-------------------------------------");
	
	//limpar a tela
	system("cls");
	
	//calculo da média
	
	media = (p1*0.4) + (p2*0.3) + (pr1*0.15) + (pr2*0.15);
	
	puts("-------------------------------------");
	puts("------Faculdade ESAMC - 2017---------");
	puts("-------------------------------------");
	puts("****  Condição Final do Aluno ****");
	
	printf("\n Aluno : \t %s",nome);
	printf("\n Média : \t %.2f",media);
	printf("\n Faltas do Aluno no Semestre: \t%d\n",faltas);
	
	if(media >=7  && faltas <=12){
		puts(" APROVADO ...");
	}
	else{
		puts(" REPROVADO ....");
	}
	
	system ("pause");
	
	
	
}
