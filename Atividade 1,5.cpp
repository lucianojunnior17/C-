#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[120], conjugue, planos, planoo;
	int filhos;
	float valorhora, salariobruto, matricula, ht, inss=0, irrf, dps, dpo, sf;
	
	puts("**** EMPRESA ESAMC S/A *****");
	
	puts("Colaborador:                ");
	gets(nome);
	
	puts("Matricula:                  ");
    scanf("%f", &matricula);
    
    puts("Horas trabalhadas:          ");
    scanf("%f", &ht);
    
    puts("Valor da Hora:              ");
    scanf("%f", &valorhora);
    
    puts("Quantidade de filhos:       ");
    scanf("%d", &filhos);
    
    puts("Conjugue:                   ");
    scanf(" %c", &conjugue);
    
    puts("Plano de saude:             ");
    scanf(" %c", &planos);
    
    puts("Plano Odontologico:         ");
    scanf(" %c", &planoo);
    system("pause");
    system("cls");
    
    printf ("****EMPRESA ESAMC S/A****\n");
    printf ("\n-----------------------\n");
    printf ("Relatorio mensal: \n");
    printf ("\n-----------------------\n");
    printf ("Dados do colaborador");
    printf ("\n-----------------------\n");
    printf ("Nome: %s", nome);
    printf ("\nMatricula: %d", matricula);
    printf ("\n-----------------------\n");
    printf ("Descontos");
    printf ("\n-----------------------\n");
    
 
    salariobruto=(ht * valorhora);
    printf("Salario Bruto: %.2f", salariobruto);
    
    if (salariobruto < 1174.87){
    	inss = salariobruto * 0.8; 
	} else if (salariobruto > 3916,20 ){
		inss = 430,78;
	} else if (salariobruto < 3916,20 || salariobruto > 1958,11){
		inss = salariobruto * 0.11;
	} else {
		inss = salariobruto * 0.9;
	}
printf ("\nDesconto INSS............................: %.2f", inss);
if(salariobruto < 1313.70 ){
	irrf = 0;
} else if (salariobruto > 2615.12){
	irrf = (salariobruto * 0.275) - 525.19;	
} else {
	irrf = (salariobruto * 0.15) - 197.05;
}	
printf ("\n Desconto IRRF................: %.2f", dps);
if (conjugue == 's' && filhos == 0){
	dps = 21.90 + 80.90;
} else if (conjugue == 's' &&filhos > 0 &&filhos <=3){
	dps = 21.90 + 80.90 + (filhos * 65.90);
}
printf("\nDesconto plano de saude.............", dps);
if (planoo == 's'){
	dpo = 40;
}	else if (planoo = 's' && conjugue == 's'){
	dpo=75;
}
printf("\nDesconto plano odontologico.............: %.2f", dpo);
//else if()
printf ("\n-----------------------\n");
printf ("\nVntagens\n");
printf ("\n-----------------------\n");
if (salariobruto <= 608.80){
	sf = filhos * 31.22;
} else if (salariobruto <= 915.05 || salariobruto >= 608.81){
}
printf ("Salario familia: %.2f", sf);
printf ("\n Quantidade de filhos : %d", filhos);
printf ("\n------------------------\n");
printf ("\nSalario\n");
printf ("\n------------------------\n");
printf ("\nSalario Bruto: %.2f", salariobruto + sf);
printf ("\n Salario Liquido: %.2f", salariobruto - inss - irrf - dps - dpo);


}
    
