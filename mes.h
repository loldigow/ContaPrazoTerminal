#ifndef MES_H
#define MES_H
#include "dia.h"
#include <iostream>
using namespace std;

class mes{
	protected:
		string nome;
		int dias;
		dia * vetor;
		string fim;
		int m;	
	public:
		string get_fim(){
			return fim;
		}
		
		string inicio;

		int get_dias(){return dias;}
		string get_nome(){return nome;}
		dia get_dia(int in){return vetor[in-1];}
		void imprimir()
		{
				cout<<this->nome<<"\nSEG TER QUA QUI SEX SAB DOM\n";
				dia_da_semana A("segunda");
				while(A.nome!=inicio)
				{
					cout<<"    ";
					A++;
				}
				int dias=this->get_dias();

				for(int i=0; i<dias; i++)
				{
					dia aux=vetor[i];
					aux.imprimir();
					if(aux.d_s=="domingo")cout<<"\n";
			
				}	
		}
		template <class T>
		dia* get_dia(T dado)
		{
//			cout<<"3 camada "<<vetor[dado.dia-1].n<<", "<<vetor[dado.dia-1].d_s<<"\n";
			return &vetor[dado.dia-1];
		}
};


class janeiro : public mes{
	public:
		janeiro(string s="", int an=0)//s=dia da semana
		{
			this->nome="janeiro";
			dias=31;
			m=1;
			inicio=s;
			dia_da_semana A(s);
			dia B[dias];
			vetor=new dia[dias];
			for(int i=0; i<dias;i++)
			{
				vetor[i].n=i+1;
				vetor[i].m=m;
				vetor[i].d_s=A.nome;
					if(vetor[i].d_s=="sabado")
					{
						vetor[i].util=0;
					}
					else if(vetor[i].d_s=="domingo")
					{
						vetor[i].util=0;
					}
					else
					{
						vetor[i].util=1;
					 } 
				A++;
			}
			fim=A.nome;
		}
};


class fevereiro : public mes{
	public:
		fevereiro(string s="", int an=0)//s=dia da semana
		{
			nome="fevereiro";
			dias=28;
			m=2;
			inicio=s;
			dia_da_semana A(s);
			dia B[dias];
			vetor=new dia[dias];
			for(int i=0; i<dias;i++)
			{
				vetor[i].n=i+1;
				vetor[i].d_s=A.nome;
				vetor[i].m=m;
					if(vetor[i].d_s=="sabado")
					{
						vetor[i].util=0;
					}
					else if(vetor[i].d_s=="domingo")
					{
						vetor[i].util=0;
					}
					else
					{
						vetor[i].util=1;
					 } 
				A++;
			}
			fim=A.nome;
		}
};
class fevereiro_1:public mes{
	public:
		fevereiro_1(string s="", int an=0)//s=dia da semana
		{
			nome="fevereiro";
			dias=29;
			m=2;
			inicio=s;
			dia_da_semana A(s);
			dia B[dias];
			vetor=new dia[dias];
			for(int i=0; i<dias;i++)
			{
				vetor[i].n=i+1;
				vetor[i].d_s=A.nome;
				vetor[i].m=m;
					if(vetor[i].d_s=="sabado")
					{
						vetor[i].util=0;
					}
					else if(vetor[i].d_s=="domingo")
					{
						vetor[i].util=0;
					}
					else
					{
						vetor[i].util=1;
					 } 
				A++;
			}
			fim=A.nome;
		}
};
class marco:public mes{
	public:
		marco(string s="", int an=0)//s=dia da semana
		{
			nome="marco";
			dias=31;
			m=3;
			inicio=s;
			dia_da_semana A(s);
			dia B[dias];
			vetor=new dia[dias];
			for(int i=0; i<dias;i++)
			{
				vetor[i].n=i+1;
				vetor[i].d_s=A.nome;
				vetor[i].m=m;
				vetor[i].a=an;
					if(vetor[i].d_s=="sabado")
					{
						vetor[i].util=0;
					}
					else if(vetor[i].d_s=="domingo")
					{
						vetor[i].util=0;
					}
					else
					{
						vetor[i].util=1;
					 } 
				A++;
			}
			fim=A.nome;
		}
};
class abril:public mes{
	public:
		abril(string s="", int an=0)//s=dia da semana
		{
			nome="abril";
			dias=30;
			m=4;
			inicio=s;
			dia_da_semana A(s);
			dia B[dias];
			vetor=new dia[dias];
			for(int i=0; i<dias;i++)
			{
				vetor[i].n=i+1;
				vetor[i].d_s=A.nome;
				vetor[i].m=m;
				vetor[i].a=an;
					if(vetor[i].d_s=="sabado")
					{
						vetor[i].util=0;
					}
					else if(vetor[i].d_s=="domingo")
					{
						vetor[i].util=0;
					}
					else
					{
						vetor[i].util=1;
					 } 
				A++;
			}
			fim=A.nome;
		}
};
class maio:public mes{
	public:
		maio(string s="", int an=0)//s=dia da semana
		{
			nome="maio";
			dias=31;
			m=5;
			inicio=s;
			dia_da_semana A(s);
			dia B[dias];
			vetor=new dia[dias];
			for(int i=0; i<dias;i++)
			{
				vetor[i].n=i+1;
				vetor[i].d_s=A.nome;
				vetor[i].m=m;
				vetor[i].a=an;
					if(vetor[i].d_s=="sabado")
					{
						vetor[i].util=0;
					}
					else if(vetor[i].d_s=="domingo")
					{
						vetor[i].util=0;
					}
					else
					{
						vetor[i].util=1;
					 } 
				A++;
			}
			fim=A.nome;
		}
};
class junho:public mes{
	public:
		junho(string s="", int an=0)//s=dia da semana
		{
			nome="junho";
			dias=30;
			m=6;
			inicio=s;
			dia_da_semana A(s);
			dia B[dias];
			vetor=new dia[dias];
			for(int i=0; i<dias;i++)
			{
				vetor[i].n=i+1;
				vetor[i].d_s=A.nome;
				vetor[i].m=m;
				vetor[i].a=an;
					if(vetor[i].d_s=="sabado")
					{
						vetor[i].util=0;
					}
					else if(vetor[i].d_s=="domingo")
					{
						vetor[i].util=0;
					}
					else
					{
						vetor[i].util=1;
					 } 
				A++;
			}
			fim=A.nome;
		}
	
};
class julho:public mes{
	public:
		julho(string s="", int an=0)//s=dia da semana
		{
			nome="julho";
			dias=31;
			m=7;
			inicio=s;
			dia_da_semana A(s);
			dia B[dias];
			vetor=new dia[dias];
			for(int i=0; i<dias;i++)
			{
				vetor[i].n=i+1;
				vetor[i].d_s=A.nome;
				vetor[i].m=m;
				vetor[i].a=an;
					if(vetor[i].d_s=="sabado")
					{
						vetor[i].util=0;
					}
					else if(vetor[i].d_s=="domingo")
					{
						vetor[i].util=0;
					}
					else
					{
						vetor[i].util=1;
					 } 
				A++;
			}
			fim=A.nome;
		}	
};
class agosto:public mes{
	public:
		agosto(string s="", int an=0)//s=dia da semana
		{
			nome="agosto";
			dias=31;
			m=8;
			inicio=s;
			dia_da_semana A(s);
			dia B[dias];
			vetor=new dia[dias];
			for(int i=0; i<dias;i++)
			{
				vetor[i].n=i+1;
				vetor[i].d_s=A.nome;
				vetor[i].m=m;
				vetor[i].a=an;
					if(vetor[i].d_s=="sabado")
					{
						vetor[i].util=0;
					}
					else if(vetor[i].d_s=="domingo")
					{
						vetor[i].util=0;
					}
					else
					{
						vetor[i].util=1;
					 } 
				A++;
			}
			fim=A.nome;
		}
};
class setembro:public mes{
	public:
		setembro(string s="", int an=0)//s=dia da semana
		{
			nome="setembro";
			dias=30;
			m=9;
			inicio=s;
			dia_da_semana A(s);
			dia B[dias];
			vetor=new dia[dias];
			for(int i=0; i<dias;i++)
			{
				vetor[i].n=i+1;
				vetor[i].d_s=A.nome;
				vetor[i].m=m;
				vetor[i].a=an;
					if(vetor[i].d_s=="sabado")
					{
						vetor[i].util=0;
					}
					else if(vetor[i].d_s=="domingo")
					{
						vetor[i].util=0;
					}
					else
					{
						vetor[i].util=1;
					 } 
				A++;
			}
			fim=A.nome;
		}
};
class outubro:public mes{
	public:
		outubro(string s="", int an=0)//s=dia da semana
		{
			nome="outubro";
			dias=31;
			m=10;
			inicio=s;
			dia_da_semana A(s);
			dia B[dias];
			vetor=new dia[dias];
			for(int i=0; i<dias;i++)
			{
				vetor[i].n=i+1;
				vetor[i].d_s=A.nome;
				vetor[i].m=m;
				vetor[i].a=an;
					if(vetor[i].d_s=="sabado")
					{
						vetor[i].util=0;
					}
					else if(vetor[i].d_s=="domingo")
					{
						vetor[i].util=0;
					}
					else
					{
						vetor[i].util=1;
					 } 
				A++;
			}
			fim=A.nome;
		}
};
class novembro:public mes{
	public:
		novembro(string s="", int an=0)//s=dia da semana
		{
			nome="novembro";
			dias=30;
			m=11;
			inicio=s;
			dia_da_semana A(s);
			dia B[dias];
			vetor=new dia[dias];
			for(int i=0; i<dias;i++)
			{
				vetor[i].n=i+1;
				vetor[i].d_s=A.nome;
				vetor[i].m=m;
				vetor[i].a=an;
					if(vetor[i].d_s=="sabado")
					{
						vetor[i].util=0;
					}
					else if(vetor[i].d_s=="domingo")
					{
						vetor[i].util=0;
					}
					else
					{
						vetor[i].util=1;
					 } 
				A++;
			}
			fim=A.nome;
		}
};
class dezembro:public mes{
	public:
		dezembro(string s="", int an=0)//s=dia da semana
		{
			nome="dezembro";
			dias=31;
			m=12;
			inicio=s;
			dia_da_semana A(s);
			dia B[dias];
			vetor=new dia[dias];
			for(int i=0; i<dias;i++)
			{
				vetor[i].n=i+1;
				vetor[i].d_s=A.nome;
				vetor[i].m=m;
				vetor[i].a=an;
					if(vetor[i].d_s=="sabado")
					{
						vetor[i].util=0;
					}
					else if(vetor[i].d_s=="domingo")
					{
						vetor[i].util=0;
					}
					else
					{
						vetor[i].util=1;
					 } 
				A++;
			}
			fim=A.nome;
		}
};



#endif
