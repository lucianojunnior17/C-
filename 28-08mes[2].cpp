#include<stdlib.h>
#include<stdlib.h>
#include<locale.h>
main() {
	
	puts("programa descobrimento do dia do M�s");
	puts("");
	
		//declara��o variavel
	
	setlocale(LC_ALL,"portuguese");
	
	int mes;
	
	//programa
	
	printf("Digite um n�mero corespondende ao m�s : \t");
	scanf("%d",&mes);
	
	//logica
	if (mes==2)
	{
		puts ("28 Dias");
	}	
	else
	{	
		if (mes ==1  || mes ==3 || mes ==5	|| mes ==7 	|| mes ==8|| mes==10 || mes==12)
	{
		puts("31 dias");
		
	}
	else
	 {
		puts ("30 dias");
		
	}
}
