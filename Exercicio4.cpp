#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n, n1=1, x =0;
	float media = 0;
	printf("\n Digite N: "); scanf("%d", &n);
	
	while(n1 <= n)
	{
		printf("\n Digite o valor de X-%d:",n1); scanf("%d",&x);
		
		media += n;
		
		n1 += 1;
	}
	
	printf("%.2f", media/n);
}
