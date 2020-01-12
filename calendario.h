//14/03/17 10:54
#ifndef CALENDARIO_H
#define CALENDARIO_H

class  calendario{
		ano ** tabela;
		int amplitude;
		int i;
		int f;
	public:
		calendario(int inicio=0, string semana="", int fim=0)
		{
			i=inicio;
			f=fim;
			amplitude=fim-inicio;
			tabela = new ano*[amplitude];
			string aux=semana;
			for(int i=0, j=inicio ; i< amplitude; i++, j++)
			{
				if(j%4==0)
				{
					//bissexto
					tabela[i]=new bissexto(aux, j);
					aux=tabela[i]->get_fim();
				}
				else
				{
					tabela[i]=new normal(aux, j);
					aux=tabela[i]->get_fim();
				}
			}
		}
		
		void imprimir()
		{
			for(int i=0; i<amplitude; i++)
			{
				cout<<"ANO DE "<<tabela[i]->get_ano_l()<<"\n";
				tabela[i]->imprimir();
				cout<<"\n\n\n";
			}
		}
		

		
		template <class T>
		dia* get_dia(T dado)
		{
			if(dado.ano>=2010 && dado.ano<=2022)
			{
				int posicao_tabela=dado.ano-i;
				return tabela[posicao_tabela]->get_dia(dado);				
			}
			else return 0;
		}
		
		template <class T>
		T*  conta_prazo_PP(T dado, int prazo)
		{
			int dias=0;
			dia * aux;
			dado++;
			aux=this->get_dia(dado);
			if(aux)
			{
				while(aux->util!=1)
				{
					dado++;
					aux=this->get_dia(dado);
				}
				//inicio enquanto nao for ultil
				system("PAUSE");
				//cout<<"contar a partir de ";
				//cout<<dado<<"\n";
				dias++;
				while(dias<prazo)
				{
					aux=this->get_dia(dado);
					//cout<<dias<<" --  "<<dado<<"       ";
					if(aux->util==0 || aux->util==1)
					{
						dias++;								//medi tempo
					}
					
					//system("PAUSE");
					dado++;
				}
				//cout<<"termina teorica dia  "<<dado<<"\n";
				
				
				aux=this->get_dia(dado);
				while(aux->util!=1)
				{
					dado++;
					aux=this->get_dia(dado);
				}
			//	cout<<"proximo dia util  "<<dado<<"\n";
				dado++;
				
				
				aux=this->get_dia(dado);
				while(aux->util!=1)
				{
					dado++;
					aux=this->get_dia(dado);
				}
				aux=this->get_dia(dado);
				//cout<<"termina dia "<<dado<<" para incrementar\n";
				
				
				
				
				
				cout<<dado;
			//	aux->imprimir();
				return &dado;
			}
			else return 0;			
			}
			
			template <class T>
		T*  conta_prazo_PC(T dado, int prazo)
		{
			int dias=0;
			dia * aux;
			dado++;
			aux=this->get_dia(dado);
			if(aux)
			{
				while(aux->util!=1)
				{
					dado++;
					aux=this->get_dia(dado);
				}
				//inicio enquanto nao for ultil
				//cout<<"contar a partir de ";
				//cout<<dado<<"\n";
				dias++;
				while(dias<prazo)
				{
					aux=this->get_dia(dado);
					//cout<<dias<<" --  "<<dado<<"       ";
					if(aux->util==1)
					{
						dias++;								//medi tempo
					}
					
					//system("PAUSE");
					dado++;
				}
				//cout<<"termina teorica dia  "<<dado<<"\n";
				
				
				aux=this->get_dia(dado);
				while(aux->util!=1)
				{
					dado++;
					aux=this->get_dia(dado);
				}
			//	cout<<"proximo dia util  "<<dado<<"\n";
				dado++;
				
				
				aux=this->get_dia(dado);
				while(aux->util!=1)
				{
					dado++;
					aux=this->get_dia(dado);
				}
				aux=this->get_dia(dado);
				//cout<<"termina dia "<<dado<<" para incrementar\n";
				
				
				
				
				
				cout<<dado;
			//	aux->imprimir();
				return &dado;
			}
			else return 0;			
			}

	protected:
		// Protected Declarations
};

#endif
