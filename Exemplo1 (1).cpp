/*
	Desenvolver um programa que fique que execute exiba 
	o n�mero de 1 � 10.
*/
#include<stdio.h>

main(){
	
	//Exibi�ao de 1 a 10
	
	int contador =1;

	
	while(contador <=10){
		printf("\n Nr...: %d", contador);
		contador++;
	}
	
	puts("\n \n ----------------------------------------------");

	//Contagem regressiva 10 � 1

	contador =10;

	while(contador >0){
		printf("\n Nr...: %d", contador);
		contador--;
	}

}

