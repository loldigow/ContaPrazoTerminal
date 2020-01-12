#ifndef DADO_H
#define DADO_H

class dado{
	public:
		int dia;
		int mes;
		int ano;
	dado(int d=0, int m=0, int a=0)
	{
		dia=d;
		mes=m;
		ano=a;
	}
	inline int get_dia(){return dia;}
	inline int get_mes(){return mes;}
	inline int get_ano(){return ano;}
	bool data_valida()
	{
		if(this->mes==1)
		{
			if(this->dia>0 && this->dia<32)return 1;
			else return 0;
		}
		else if(this->mes==2)
		{
			if(this->ano%4==0)
			{
				if(this->dia>0 && this->dia<30)return 1;
				else return 0;
			}
			else
			{
				if(this->dia>0 && this->dia<29)return 1;
				else return 0;
			}
		}
		else if(this->mes==3)
		{
			if(this->dia>0 && this->dia<32)return 1;
			else return 0;
		}
		else if(this->mes==4)
		{
			if(this->dia>0 && this->dia<31)return 1;
			else return 0;	
		}
		else if(this->mes==5)
		{
			if(this->dia>0 && this->dia<32)return 1;
			else return 0;	
		}
		else if(this->mes==6)
		{
			if(this->dia>0 && this->dia<31)return 1;
			else return 0;
		}
		else if(this->mes==7)
		{
			if(this->dia>0 && this->dia<32)return 1;
			else return 0;
		}
		else if(this->mes==8)
		{
			if(this->dia>0 && this->dia<32)return 1;
			else return 0;
		}
		else if(this->mes==9)
		{
			if(this->dia>0 && this->dia<31)return 1;
			else return 0;
		}
		else if(this->mes==10)
		{
			if(this->dia>0 && this->dia<32)return 1;
			else return 0;
		}
		else if(this->mes==11)
		{
			if(this->dia>0 && this->dia<31)return 1;
			else return 0;
		}
		else if(this->mes==12)
		{
			if(this->dia>0 && this->dia<32)return 1;
			else return 0;
		}
		return 0;
	}
	void operator ++ (int)
	{
		dia++;
		if(dia==29 && ano%4!=0)
		{
			if(mes==2)
			{
				dia=1;
				mes=3;	
			}
			
		}
		else if(dia==30 && ano%4==0)
		{
			if(mes==2)
			{
				dia=1;
				mes=3;	
			}
		}
		else if(dia==31)
		{
			switch(mes)
			{
				case 4:
					dia=1;
					mes=5;
					break;
					
				case 6:
					dia=1;
					mes=7;
					break;
					
				case 9:
					dia=1;
					mes=10;
					break;
					
				case 11:
					dia =1;
					mes=12;
					break;
			}
		}
		else if(dia==32)
		{
			switch(mes)
			{
				case 1:
					dia=1;
					mes=2;
					break;
					
				case 3:
					dia=1;
					mes=4;
					break;
					
				case 5:
					dia=1;
					mes=6;
					break;
					
				case 7:
					dia=1;
					mes=8;
					break;
					
				case 8:
					dia=1;
					mes=9;
					break;
					
				case 10:
					dia=1;
					mes=11;
					break;
					
				case 12:
					dia=1;
					mes=1;
					ano++;
					break;
					
					
			}
		}
	}
	
	
	
	
	friend ostream &operator << (ostream & out, dado & in);
};
#endif

ostream &operator << (ostream & out, dado & in)
{
	out<<in.dia<<"/"<<in.mes<<"/"<<in.ano<<"\n";
}

