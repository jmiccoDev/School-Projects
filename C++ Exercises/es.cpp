#include <iostream>
#include <cstring>

#define N 10

using namespace std;

struct Auto
{
	string marca;
	int anno_di_matricolazione;
	int cilindrata;
	
	string nome;
	string cognome;	
};
Auto autosalone[N];
int indice_ultimo=-1;


Auto aggiungi_auto()
{
	Auto x;
	cout<<"INSERISCI: "<<endl;
	
	cout<<"MARCA "<<endl;
	cin>> x.marca;
	
	cout<<"ANNO DI MATRICOLAZIONE "<<endl;
	cin>> x.anno_di_matricolazione;
	
	cout<<"CILINDRATA "<<endl;
	cin>> x.cilindrata;
	
	cout<<"NOME "<<endl;
	cin>> x.nome;
	
	cout<<"COGNOME "<<endl;
	cin>> x.cognome;
	
	return x;
}



void visualizza()
{
	for(int i=0;i<=indice_ultimo;i++)
	{
	cout<<"----------------------------------------------------------------"<<endl;
	
	cout<<"VISUALIZAZZIONE:"<<endl;
	
	cout<<"MARCA => ";
	cout<< autosalone[i].marca<<endl;
	
	cout<<"ANNO DI MATRICOLAZIONE => ";
	cout<< autosalone[i].anno_di_matricolazione<<endl;
	
	cout<<"CILINDRATA => ";
	cout<< autosalone[i].cilindrata<<endl;
	
	cout<<"NOME => ";
	cout<< autosalone[i].nome<<endl;
	
	cout<<"COGNOME => ";
	cout<< autosalone[i].cognome<<endl;
	cout<<"----------------------------------------------------------------"<<endl;
	}
}



int main()
{
	int operazione;
	
	do
	{
		
		cout<<"----------------------------------------------------------------"<<endl;
		cout<<"INSERISCI OPERAZIONE"<<endl;
		cout<<"1 => AGGIUNGI UN AUTO"<<endl;
		cout<<"2 => VISUALIZZA"<<endl;
		cout<<"3 => CHIUDI APPLICAZIONE"<<endl;
		cout<<"----------------------------------------------------------------"<<endl;
		
		cin>>operazione;
		
		if(operazione==1)
		{
			indice_ultimo++;
			autosalone[indice_ultimo]=aggiungi_auto();
		}
		
		if(operazione==2)
		{
			visualizza();
		}
	}
	while(operazione!=3);
}