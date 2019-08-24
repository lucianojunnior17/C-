#include<iostream>
using namespace std;
main()
{char proddg[20];
int quantdg;
float precodg;
float totaldg;
float descdg;
float liquidodg;
cout<<"\n atividade 1-c++";
cout<< "\n................";
cout<< "\n digite o produto:";
cin >>proddg;
cout<< "\n digite a quantidade:";
cin>> quantdg;
cout<<"\n digite o preço:";
cin >> precodg;
cout<< "\n\n............";
totaldg=precodg*quantdg;
if(totaldg<100) {descdg=totaldg*0.10;}
           else {descdg=totaldg*0.20;};
liquidodg=totaldg-descdg;
cout<<"\n total da compra:"<<totaldg;
cout<<"\n desconto:"<<descdg;
cout<<"\n total liquido:"<<liquidodg;
cout<<"\n.............";
cout<<"\n fim de programa";
return 0;
}
