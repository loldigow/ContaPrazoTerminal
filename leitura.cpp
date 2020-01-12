#include "dado.h"
#include "calendario.h"
#include <fstream>
using namespace std;


int array_to_T(string &in1)
{	
	int i=0;
	while(in1[i]!='\0')i++;
 	int d=1;
 	i=i-1;
	int r=0;
	while(i>=0)
	{
		r=r+(in1[i]-48)*d;
		d=d*10;
		i--;
	}
	return r;
}


int leitura_recesso(calendario &in)
{
	int max=15;
	char linha[max];
	string palavra="";
	dado A;
	cout<<"TENTANDO FAZER A LEITURA DO ARQUIVO RECESSO.TXT\nisso pode levar um tempo de acordo com a sua conexao\n";
	ifstream fin("S:/01 Camara Criminal/Comum/Aiane/feriadoserecessos/recesso.txt");
	int cont=0;
	if(fin)
	{
		system("CLS");
		while(fin)
		{
			fin.getline(linha, max);
				int i=0, j=0;
				if(linha[0]=='\0')
				{
					return 0;
				}
				while(linha[i]!='\0')
				{
	
					if(linha[i]=='/')
					{
						if(j==0)
						{
							j++;
							int dia=array_to_T(palavra);
							A.dia=dia;
							palavra="";
						}else
						{
							j++;
							int mes=array_to_T(palavra);
							A.mes=mes;
							palavra="";
						}
					}
					else
					{
						palavra+=linha[i];
					}
					
					i++;
	
				}
								int ano=array_to_T(palavra);
								A.ano=ano;
								palavra="";
								dia * aux=in.get_dia(A);
								aux->util=2;
								cont++;
		}
	
		return 1;	
	}
	else for(;;)
	{
		cout<<"Existe um problema na sua conexão que impossibilitou a leitura do arquivo de recessos.\n";
		system("PAUSE");
	}
	
	


	
}




int leitura_feriados(calendario &in)
{
	int max=15;
	char linha[max];
	string palavra="";
	dado A;
	cout<<"TENTANDO FAZER A LEITURA DO ARQUIVO FERIADOS.TXT\nisso pode levar um tempo de acordo com a sua conexao\n";
	ifstream fin("S:/01 Camara Criminal/Comum/Aiane/feriadoserecessos/feriados.txt");								//NAO TA FUNCIONANDO A LEITURA DO CAMINHO DENTRO DO s:	
	int cont=0;
	if(fin)
	{
		system("CLS");
		while(fin)
		{
			fin.getline(linha, max);
				int i=0, j=0;
				if(linha[0]=='\0')
				{
					return 0;
				}
				while(linha[i]!='\0')
				{
	
					if(linha[i]=='/')
					{
						if(j==0)
						{
							j++;
							int dia=array_to_T(palavra);
							A.dia=dia;
							palavra="";
						}else
						{
							j++;
							int mes=array_to_T(palavra);
							A.mes=mes;
							palavra="";
						}
					}
					else
					{
						palavra+=linha[i];
					}
					
					i++;
	
				}
								int ano=array_to_T(palavra);
								A.ano=ano;
								palavra="";
								dia * aux=in.get_dia(A);
								aux->util=0;
								cont++;
		}

		return 1;
	}
	else for(;;)
	{
		cout<<"Existe um problema na sua conexão que impossibilitou a leitura do arquivo de feriados.\n";
		system("PAUSE");
	}
	
	
}
