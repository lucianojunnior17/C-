/* 
Aula: 4 	

Elaborar um programa para calcular a quantidade de litros de combustível gasta em uma viagem, 
utilizando-se um automóvel que faz 12 km por litro. 
Para obter o cálculo, o usuário deverá fornecer o tempo gasto na viagem em horas e a 
velocidade média durante a mesma. Desta forma, será possível obter a distância percorrida com a 
fórmula: DISTANCIA = TEMPO * VELOCIDADE. 
Tendo o valor da distância, basta calcular a quantidade de litros de combustível utilizada na viagem 
com a fórmula: LITROS_USADOS = DISTANCIA / 14. 
O programa deverá apresentar os valores da velocidade média, 
tempo gasto na viagem, a distância percorrida e a quantidade de litros utilizada na viagem.

Caso o valor de litros cosumidos for superior a 30, exibir a mensagem  "Viagem não tão economica assim", 
caso contrário, "Viagem econômica".
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variáveis
	int tempo, velocidade;
	float distancia, litros_consumidos;

	puts(" Consumo médio veicular");
	
	printf("\n Digite o tempo (horas) gasta na viagem:  ");
	scanf("%d",&tempo);
	
	printf("\n Digite a velocidade média (KM/H):  ");
	scanf("%d",&velocidade);
	
	//Obtendo a distância
	distancia = tempo * velocidade;
	
	//obtendo o tempo gasto
	litros_consumidos = distancia / 14;
	
	system("cls");
	
	puts("Relatório detalhado da viagem");
		
	printf("\n Tempo................: %d ", tempo);
	printf("\n Velocidade...........: %d ", velocidade);
	printf("\n Distância............: %.2f ", distancia);
	printf("\n Litros Consumidos....: %.2f ", litros_consumidos);
	
	
	//Faz a verificação para saber se o valor pago é caro
	if(litros_consumidos <= 30)
	{
		printf("\n\n Viagem econômica! \n\n");
	}
	else
	{
		printf("\n\n Viagem não tão economica assim... \n\n");
	}
	
	system("pause");
}

