#include <iostream>
#include <locale.h>
using  namespace std;
main ()
{setlocale  (LC_ALL,"portuguese");
 char   nomeas  [20];
 float  p1as;
float p2as ;
float previasas;
float atividadesas;
int faltasas;
float mediaas;
string sitas;
cout<< "         Pratica 2 progamaçao 2" ;
cout <<"\n ......................................";
cout <<"\n nome do aluno .......:";
cin >> nomeas ;
cout<<"\n prova 1 ..............:";
cin >> p1as;
cout<<"\n prova2................:";
cin>>p2as;
cout<<"\nprevias................:"; 
cin>> previasas;
cout <<"\natividades............:";
cin>> atividadesas;
cout <<"\nfaltas................:";
cin>> faltasas;
cout <<"\n ......................................";
cout<<"\n tecle enter para boletim\n";
system ("pause");
mediaas=p1as*0.3+p2as*0.3+previasas*0.2+atividadesas*0.2;
if(faltasas>10) {sitas="reprovado falta";}
else {if (mediaas>=7) {sitas="aprovado";} 
else {sitas ="reprovado nota";}};
system ("cls"); // limpa tela 




cout<<"        Pratica 2  progamaçao 2 ";

cout <<"\n\n ......................................";

cout<< "\n\n aluno ...............:" << nomeas;

cout <<"\n\n media................:"<< mediaas;

cout<<"\n\n faltas.................:"<< faltasas;

cout<<"\n\n situaçao final.........:"<< sitas;

cout<<"\n\n........................................";

cout<<"\n\n fim de programa ";

}






