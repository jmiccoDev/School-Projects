#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	int DIM= 100;
	int x [DIM];
	for(int cont=0; cont<DIM;cont++)
	x[cont]=rand()%99;
	
		for(int i=0; i<DIM;i++)
		cout<< x[i]<<" ";
	return 0;
}
int numero;
int i;
int j;
int deposito,

cout << "Quanti elementi vuoi inserire? ";
cin>> numero;

for(i=0; i< numero; i++)
{
	cout<<"inserisci il"<<i+1<<"elemento:";
	cin>> DIM[i];
}
for(i= 0; i<numero-1; i++)
{
	for(j= i+1; j < numero; j++)
	{
		if(x[i] < x[j])
		{
			deposito= x[i];
				x[i]  = x[j]
				x[j]  = deposito ;
		}
	}
}

