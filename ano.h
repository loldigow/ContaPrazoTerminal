#ifndef ANO_H
#define ANO_H

class  ano{
	protected:
		mes** meses;
		string inicio;
		int rano;
		int ano_l;
		string fim;
	public:
		void imprimir()
		{
			cout<<ano_l<<"\n";
			for(int i=0; i<12; i++)
			{
				meses[i]->imprimir();
				cout<<"\n\n";
			}
		}
		int get_ano_l()
		{
			return ano_l;
		}
		string get_fim()
		{
			return fim;
		}
		template <class T>
		dia* get_dia(T dado)
		{
			int m=dado.mes;
//			cout<<"2camada\n";
//			cout<<"acessar meses["<<m<<"] correspondente ao mes "<<meses[m-1]->get_nome()<<"\n";
			return meses[m-1]->get_dia(dado);
		}
		
};


class normal:public ano{
	public:
		normal(string semana, int inicio)
		{
			ano_l=inicio;
			meses=new mes*[12];
			meses[0]=new janeiro(semana,inicio);
			meses[1]=new fevereiro(meses[0]->get_fim(),inicio);
			meses[2]=new marco(meses[1]->get_fim(),inicio);
			meses[3]=new abril(meses[2]->get_fim(),inicio);
			meses[4]=new maio(meses[3]->get_fim(),inicio);
			meses[5]=new junho(meses[4]->get_fim(),inicio);
			meses[6]=new julho(meses[5]->get_fim(),inicio);
			meses[7]=new agosto(meses[6]->get_fim(),inicio);
			meses[8]=new setembro(meses[7]->get_fim(),inicio);
			meses[9]=new outubro(meses[8]->get_fim(),inicio);
			meses[10]=new novembro(meses[9]->get_fim(),inicio);
			meses[11]=new dezembro(meses[10]->get_fim(),inicio);
			fim=meses[11]->get_fim();
		}
};



class bissexto:public ano{
	public:
		bissexto(string semana, int inicio)
		{
			ano_l=inicio;
			meses=new mes*[12];
			meses[0]=new janeiro(semana);
			meses[1]=new fevereiro_1(meses[0]->get_fim());
			meses[2]=new marco(meses[1]->get_fim());
			meses[3]=new abril(meses[2]->get_fim());
			meses[4]=new maio(meses[3]->get_fim());
			meses[5]=new junho(meses[4]->get_fim());
			meses[6]=new julho(meses[5]->get_fim());
			meses[7]=new agosto(meses[6]->get_fim());
			meses[8]=new setembro(meses[7]->get_fim());
			meses[9]=new outubro(meses[8]->get_fim());
			meses[10]=new novembro(meses[9]->get_fim());
			meses[11]=new dezembro(meses[10]->get_fim());
			fim=meses[11]->get_fim();
		}
};


#endif
