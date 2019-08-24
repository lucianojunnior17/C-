/*
	Ler nome, sexo e idade.  Se sexo for feminino e idade menor que 18. Imprimir o nome da pessoa e
	a mensagem "Entrada permitida". Caso contrário, exibir a mensagem "Entrada NÃO permitida.". 
*/
#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h>
main() 
{ 
	setlocale(LC_ALL, "Portuguese");
    
	char nome[30], sexo; 
    int idade; 
    
    printf("\n Informe seu nome: " ); 
    gets(nome); 
    
	printf("\n Informe seu sexo:  "); 
    scanf("%c",sexo); 

    printf("\n Informe sua idade: "); 
    scanf("%d",&idade); 

    if ((sexo == 'f' || sexo ==  'F') && idade < 18)  
    {
    	printf("\n Entrada permitida!"); 	
	}
    else 
    {
    	printf("\n Entrada NÃO permitida!"); 
	}
    
	system("pause"); 
} 
