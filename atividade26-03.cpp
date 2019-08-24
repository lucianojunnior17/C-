#include <iostream>
#include <locale.h>
using namespace std;
main()
{ char prod[20];
int quant;
float preco;
float total;

setlocale(LC_ALL,"Portuguese");

cout<<"    Meu Primeiro Programa C++";
cout<<"\n --------------------------";
cout<<" \n Digite o nome do Produto:";
cin>>prod;
cout<<"Digite a quantidade vendida :";
cin>>quant;
cout<<"\n Digite o preço unitário (em R$) :";
cin>>preco;
cout<<"\n --------------------------";
total=preco*quant;
cout<<"\n O Total de  "<<prod<<" é :R$ "  <<total;
cout<<"\n --------------------------";
cout<< "\n Fim do Programa";
return 0;
}
