/*pedaço do codigo responsavel para declarar a estrutura de um dia*/
#ifndef DIA_H
#define DIA_H
string dado_certo(int in1)
{
	string retur="";
	if(in1>=10){
		retur="";
		int aux=in1/10;
		int aux2=in1%10;
		retur+=aux+48;
		retur+=aux2+48;
	}
	else
	{
		retur="0";
		retur+=(in1+48);
	}
	return retur;
}
class dia{
	public:
		int n;
		int m;
		int a;
		int util;
		string d_s;
		dia(int ne=1, string d_da_semana="")//0 feriado 1-util 2-recesso
		{
			cout<<d_da_semana;
			dia_da_semana A("");
			try{
				if(ne<1)throw 42;
				if(ne>31)throw 43;
				if(A.valido(d_da_semana)==0) throw 44;
					d_s=d_da_semana;					
					n=ne;
					m=0;
					a=0;
			}
			catch(int linha)
			{
				cout<<"dia invalido, linha ferida "<<linha;
			}
					//cout<<this->d_s<<" ";
					//system("PAUSE");
		}
		
		string motivo()
		{
			if(this->util==0)
			{
				return "feriado";
			}
			else return "recesso";
		}
		void imprimir()
		{
			cout<<dado_certo(n)<<"  ";
		}
};
#endif
