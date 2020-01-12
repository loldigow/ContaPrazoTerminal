#ifndef DIA_DASEMANA_H
#define DIA_DASEMANA_H
#include <iostream>
using namespace std;

class dia_da_semana{
	public:
	string nome;
		dia_da_semana(string ds="domingo")
		{
			try
			{
				if(!valido(ds)) throw 13;
					nome=ds;
			}
			catch(int erro)
			{
				cout<<"erro, linha ferida "<<erro<<" dia da semana "<<ds<<" nao e valido \n" ;
			}
		}
		bool valido(string ds)
		{
			if(ds=="segunda")return 1;
			if(ds=="terca")return 1;
			if(ds=="domingo")return 1;
			if(ds=="quarta")return 1;
			if(ds=="quinta")return 1;
			if(ds=="sexta")return 1;
			if(ds=="sabado")return 1;
			if(ds=="")return 1;
			return 0;
		}
		void operator ++ (int)
		{
			if(this->nome=="domingo")this->nome="segunda";
			else if(this->nome=="segunda")this->nome="terca";
			else if(this->nome=="terca")this->nome="quarta";
			else if(this->nome=="quarta")this->nome="quinta";
			else if(this->nome=="quinta")this->nome="sexta";
			else if(this->nome=="sexta")this->nome="sabado";
			else if(this->nome=="sabado")this->nome="domingo";
		}
};
#endif
