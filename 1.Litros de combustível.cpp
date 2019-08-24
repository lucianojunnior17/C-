/* 
Aula: 4 	

Elaborar um programa para calcular a quantidade de litros de combust�vel gasta em uma viagem, 
utilizando-se um autom�vel que faz 12 km por litro. 
Para obter o c�lculo, o usu�rio dever� fornecer o tempo gasto na viagem em horas e a 
velocidade m�dia durante a mesma. Desta forma, ser� poss�vel obter a dist�ncia percorrida com a 
f�rmula: DISTANCIA = TEMPO * VELOCIDADE. 
Tendo o valor da dist�ncia, basta calcular a quantidade de litros de combust�vel utilizada na viagem 
com a f�rmula: LITROS_USADOS = DISTANCIA / 14. 
O programa dever� apresentar os valores da velocidade m�dia, 
tempo gasto na viagem, a dist�ncia percorrida e a quantidade de litros utilizada na viagem.

Caso o valor de litros cosumidos for superior a 30, exibir a mensagem  "Viagem n�o t�o economica assim", 
caso contr�rio, "Viagem econ�mica".
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//Declara��o de vari�veis
	int tempo, velocidade;
	float distancia, litros_consumidos;

	puts(" Consumo m�dio veicular");
	
	printf("\n Digite o tempo (horas) gasta na viagem:  ");
	scanf("%d",&tempo);
	
	printf("\n Digite a velocidade m�dia (KM/H):  ");
	scanf("%d",&velocidade);
	
	//Obtendo a dist�ncia
	distancia = tempo * velocidade;
	
	//obtendo o tempo gasto
	litros_consumidos = distancia / 14;
	
	system("cls");
	
	puts("Relat�rio detalhado da viagem");
		
	printf("\n Tempo................: %d ", tempo);
	printf("\n Velocidade...........: %d ", velocidade);
	printf("\n Dist�ncia............: %.2f ", distancia);
	printf("\n Litros Consumidos....: %.2f ", litros_consumidos);
	
	
	//Faz a verifica��o para saber se o valor pago � caro
	if(litros_consumidos <= 30)
	{
		printf("\n\n Viagem econ�mica! \n\n");
	}
	else
	{
		printf("\n\n Viagem n�o t�o economica assim... \n\n");
	}
	
	system("pause");
}

