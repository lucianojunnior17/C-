/* 
Aula:		3 	
Finalidade:	Solicita ao usu�rio 2 n�meros inteiros e realiza a soma.
			Na sequ�ncia, verifica se o n�mero � maior do que 20.
*/
#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, soma;

	printf("Digite o primeiro n�mero: \t ");
	scanf("%d",&num1);
	
	printf("Digite o segundo n�mero: \t ");
	scanf("%d",&num2);
	
	soma = num1 + num2;
	printf("O resultado da soma �: \t %d \n", soma);
	
	if (soma > 20)
		printf("Soma maior que 20! \n");
	else
		printf("Soma menor que 20 \n");
	
	
	
}
