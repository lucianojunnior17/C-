#include<stdlib.h>
#include<stdlib.h>
#include<locale.h>
main() {
	//declara��o variavel
	
	setlocale(LC_ALL,"portuguese");
	
	float p1,p2,pr1,pr2,media;
	int faltas;
	char nome[80];
	
	//cabe��rio programa
	
	puts("-------------------------------------");
	puts("------Faculdade ESAMC - 2017---------");
	puts("-------------------------------------");
	puts("**** Consulta de Notas e Faltas****");
	
	printf("\n Nome do Aluno \t"); gets(nome);
	
	printf("Digite a Nota da P1 \t"); scanf("%f",&p1);
	printf("Digite a Nota da P2 \t") ;scanf("%f",&p2);
	printf("Digite a Nota da Previa 1 \t"); scanf("%f",&pr1);
	printf("Digite a Nota da Pr�via 2 \t"); scanf("%f",&pr2);
	printf("Digite o N�mero de faltas \t"); scanf("%d",&faltas);
	
	puts("-------------------------------------");
	
	//limpar a tela
	system("cls");
	
	//calculo da m�dia
	
	media = (p1*0.4) + (p2*0.3) + (pr1*0.15) + (pr2*0.15);
	
	puts("-------------------------------------");
	puts("------Faculdade ESAMC - 2017---------");
	puts("-------------------------------------");
	puts("****  Condi��o Final do Aluno ****");
	
	printf("\n Aluno : \t %s",nome);
	printf("\n M�dia : \t %.2f",media);
	printf("\n Faltas do Aluno no Semestre: \t%d\n",faltas);
	
	if(media >=7  && faltas <=12){
		puts(" APROVADO ...");
	}
	else{
		puts(" REPROVADO ....");
	}
	
	system ("pause");
	
	
	
}
