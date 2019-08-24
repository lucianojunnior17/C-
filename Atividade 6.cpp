#include<iostream>
#include<locale.h>
using namespace std;
main()
{string nomemd;
 string tipomd;
 float kmmd;
 int horamd;
 string bandeiramd;
 float valortotalmd;
 string resp;
 setlocale (LC_ALL, "Portuguese");
 do
 {system ("cls");
 cout<<"\n-----------------------";
 cout<<"\n serviço de taxi";
 cout<<"\n-----------------------";
 cout<<"\n  entradas:";
 cout<<"\n nome do cliente:";
 cin>>nomemd;
 cout<<"\n tipo de serviço (p/b):";
 cin>>tipomd;
 cout<<"\n quilometragem:";
 cin>>kmmd;
 cout<<"\n hora de serviço:";
 cin>>horamd;
 cout<<"\n------------------------:";
 if (kmmd>100){kmmd=kmmd*2;};
 if((horamd>=6) & (horamd<=22)){bandeiramd="1"; valortotalmd=7+1.40*kmmd;}
 else{bandeiramd="2"; valortotalmd=10+1.55*kmmd;};
 if(tipomd=="p"){valortotalmd=valortotalmd*1.15;};
 cout<<"\n saidas"; 
 cout<<"\n bandeira--------------------:"<<bandeiramd;
 cout<<"\n quilometragem calculada-----:"<<kmmd;
 cout<<"\n valor total da corrida------------:"<<valortotalmd;
 cout<<"\n--------------------------------------";
 cout<<"mensagem: tecle s para nova consulta";
 cin>>resp;}
 while(resp=="s");
 return 0;}
