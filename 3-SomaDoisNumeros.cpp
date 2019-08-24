/* 
Aula:		3 	
Finalidade:	Solicita ao usuário 2 números inteiros e realiza a soma.
			Na sequência, verifica se o número é maior do que 20.
*/
#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, soma;

	printf("Digite o primeiro número: \t ");
	scanf("%d",&num1);
	
	printf("Digite o segundo número: \t ");
	scanf("%d",&num2);
	
	soma = num1 + num2;
	printf("O resultado da soma é: \t %d \n", soma);
	
	if (soma > 20)
		printf("Soma maior que 20! \n");
	else
		printf("Soma menor que 20 \n");
	
	
	
}
