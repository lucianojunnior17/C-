#include <iostream>
#include <locale.h>
using namespace std;
main()
{setlocale(LC_ALL,"PORTUGUESE");
string nomell;
int idadell ;
int tempoll;
float matrill;
string categoriall;
float vmensall;
float p5ll;
float p10ll;
string respll;
do
{system("cls");
cout<<"\n \n Prova Pratica Programação 2	";
cout<<"\n \n Lucia Lima 					";
cout<<"\n \n -------------------------------";
cout<<"\n \n Entradas :";
cout<<"\n \n Nome do Atleta............... :";
cin>>nomell;
cout<<"\n \n Idade.........................:";
cin>>idadell;
cout<<"\n \n Tempo de treino...............:";
cin>>tempoll;
cout<<"\n \n Matricula.....................:";
cin>>matrill;
cout<<"\n \n--------------------------------";

// Calculos

if ((idadell>=5) & (idadell<=11)) {categoriall="Infantil"; vmensall=matrill*0.5;}
if ((idadell>=12 )& (idadell<=17))  {categoriall="Juvenil" ; vmensall=matrill*0.75;}
if (idadell>=18) {categoriall="Adulto";vmensall=matrill;}
if (tempoll>10) { categoriall="Adultos"; vmensall*1;}
if ((idadell>=18 ) & (tempoll<1)) { categoriall="Juvenil";}
if (idadell<5) { categoriall="NAO ADIMITIDO"; vmensall*0;}

//VALORES PARCELADOS 

p5ll=(vmensall*5*0.95);
p10ll=(vmensall*5*0.90);
system("CLS");
cout <<"\n\n ----------------------------------";
cout << "\n\n Saídas: ";
cout<<"\n\n Categoria............:"<<categoriall;
cout<<"\n\n Mensalidade..........:"<<vmensall;
cout<<"\n\n Valor 5 Meses........:"<<p5ll;
cout<<"\n\n Valor 10 Meses.......:"<<p10ll;
cout <<"\n\n ----------------------------------";
cout<<"\n\n Mensagem: Deseja efetuar novo cadastro <s/n>";
cin>>respll;}
while (respll=="s");
return 0;
}


