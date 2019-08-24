#include<iostream>
#include <locale.h> 
using namespace std;
main()
{setlocale (LC_ALL,"portuguese");
char nomedg[20];
float p1dg;
float p2dg;
float prvdg;
float atvdg;
int fltdg;
float mediadg;
string sitdg;

cout<<"\n pratica2-programação2";
cout<<"\n...................";
cout<< "\n nome do aluno.....:";
cin>> nomedg;
cout<<"\n prova 1......:";
cin>> p1dg;
cout<< "\n prova 2........:";
cin>> p2dg;
cout<< "\n previas......:";
cin>> prvdg;
cout<< "\n atividades........:";
cin>> atvdg;
cout<< "\n faltas.......:";
cin>> fltdg;
cout<<"\n\n..............";
cout<< "\n tecle enter para gerar boletim";
mediadg=p1dg*0.3+p2dg*0.3+prvdg*0.2+atvdg*0.2;
if (fltdg>10) {sitdg="reprovado frequencia";}
else {if (mediadg>=7) {sitdg="aprovado";}
else {sitdg="reprovado nota";}};
system ("pause");
system ("cls");
cout<<"\n pratica 2-programação 2";
cout<<"\n................";
cout<< "\n aluno............:"<<nomedg;
cout<< "\n media final.....:"<<mediadg;
cout<<"\n faltas...........:"<<fltdg;
cout<<"\n situação final...:"<<sitdg;
cout<<"\n\n................";
cout<<"\n fim de programa";
return 0;

}


