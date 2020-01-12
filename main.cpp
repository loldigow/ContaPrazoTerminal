#include "dia_da_semana.h"
#include "dia.h"
#include "mes.h"
#include "ano.h"
#include "calendario.h"
#include "leitura.cpp"
#include "fila.cpp"
#include <iostream>
using namespace std;

class file{
	public:	
		dia * variavel;
		int dias;
		int diai;
		int mesi;
		int anoi;
		int diaf;
		int mesf;
		int anof;
		file()
		{
			diai=0;
			mesi=0;
			anoi=0;
			diaf=0;
			mesf=0;
			anof=0;
		}
	friend ostream & operator << (ostream & out, file & dado);
};
ostream & operator << (ostream & out, file & dado)
	{
		out<<dado.diai<<"/"<<dado.mesi<<"/"<<dado.anoi<<"---------"<<dado.dias<<"--------->"<<dado.diaf<<"/"<<dado.mesf<<"/"<<dado.anof<<"\n";
		return out;
	}

int main()
{
	calendario A(2010, "sexta", 2022);
	fila <file> B;

	leitura_feriados(A);
	leitura_recesso(A);


	
	for(;;)
	{
		cout<<"conta prazo:\nDigite data Ex:02 03 2017.\n";
		int d,m,a;
		dado  aux;
		cin>>d;
		cin>>m;
		cin>>a;
		aux.dia=d;
		aux.mes=m;
		aux.ano=a;
		int i=0;
		while(!aux.data_valida())						//FALTA DEBUGAR A ANTRADA DE DADOS OK
		{
			cout<<"dia invalido para contagem de prazo\n";
			cin>>d;
			cin>>m;
			cin>>a;
			aux.dia=d;
			aux.mes=m;
			aux.ano=a;
			i++;
			if(i==20)
			{
				return 0;
			}
			
		}
		int dias;
		dia * buffer=A.get_dia(aux);
		if(buffer)
		{
			if(buffer->util==1)
			{
				cout<<"prazo\n";
				cin>>dias;
				
				dado* aux2=A.conta_prazo_PP(aux, dias);
				if(aux2){
					file C;
					C.diai=aux.dia;
					C.mesi=aux.mes;
					C.anoi=aux.ano;
					C.dias=dias;
					C.diaf=aux2->dia;
					C.mesf=aux2->mes;
					C.anof=aux2->ano;		
					cout<<"\n\n\n\n\n";
					B.adicionar(C);
					cout<<"\n\n\n";	
				}			
			}
			else
			{
				cout<<"Dia invalido para inicio de prazo.\n";
				cout<<buffer->d_s<<"\nmotivo "<<buffer->motivo()<<"\n\n";
			}
		}else cout<<"data fora do intervalo admitido";



		system("PAUSE");
		system("CLS");
		cout<<"Resultados recentes: \n";
		B.imprimir();
	}
	
}
