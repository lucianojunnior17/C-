#include<stdlib.h>
#include<stdlib.h>
#include<locale.h>
main() {
	//declara��o variavel
	
	setlocale(LC_ALL,"portuguese");
	int mes;
	
	//programa
	
	printf("Digite um n�mero entre 1 e 12 : \t");
	scanf("%d",&mes);
	
	//logica
	
	if (mes >12) {
		puts ("Por favor digite um n�mero entre 1 e 12");
	}
}
