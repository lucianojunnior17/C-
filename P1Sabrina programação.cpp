#include<iostream>
#include<locale.h>
using namespace std;
main ()
{setlocale(LC_ALL,"PORTUGUESE");
string nomsf;
int idadesf;
int temposf;
float matrisf;
string categsf;
float mensasf;
float v5sf;
float v10sf;
string respsf;
do
{system ("CLS");
cout <<"\n\n        AVALIAÇÃO PRÁTICA       ";
cout <<"\n\n       Sabrina Ferreira     ";
cout <<"\n\n ----------------------------------";
cout << "\n\n Entradas: ";
cout<<"\n\n Nome do Atleta........:";
cin>>nomsf;
cout<<"\n\n Idade.................:";
cin>>idadesf;
cout<<"\n\n Tempo de treino.......:";
cin>>temposf;
cout<<"\n\n Matrícula.............:";
cin>>matrisf;
cout <<"\n\n ----------------------------------";
//Inicio lógica
if ((idadesf>=5)&(idadesf<=11)) {categsf="Infantil"; mensasf=matrisf*0.5;}
if ((idadesf>=12)&(idadesf<=18)) {categsf="Juvenil"; mensasf=matrisf*0.75;};
if (idadesf>=19) {categsf="adulto";mensasf=matrisf*1;};
if (temposf>9){categsf="adulto";mensasf=matrisf*1;};
if ((idadesf>19) & (temposf<2)){categsf="Juvenil"; mensasf=matrisf*0.75;};
if (idadesf<5) {categsf="NÃO ADMITIDO"; mensasf=0;};
// valores parcelados
v5sf=(mensasf*5*0.95);
v10sf= (mensasf*10*0.90);
system("CLS");
cout <<"\n\n ----------------------------------";
cout << "\n\n Saídas: ";
cout<<"\n\n Categoria............:"<<categsf;
cout<<"\n\n Mensalidade..........:"<<mensasf;
cout<<"\n\n Valor 5 Meses........:"<<v5sf;
cout<<"\n\n Valor 10 Meses.......:"<<v10sf;
cout <<"\n\n ----------------------------------";
cout<<"\n\n Mensagem: Deseja efetuar novo cadastro <s/n>";
cin>>respsf;}
while (respsf=="s");
return 0;
}

