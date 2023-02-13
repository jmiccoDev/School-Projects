#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;


void display(int v[],int N)
{
	int i;
	for(i=0;i<N;i++)
	{
		cout<<v[i]<<" ; ";
	}
	cout<<endl;
}

void gen(int v[],int N)
{
	int i;
	srand(time(NULL));
	for(i=0;i<N;i++)
	{
		v[i]=1+rand()%50;
	}
}

void pardis(int v[],int N,int &p, int &d)
{
	int i;
	for(i=0;i<N;i++)
	{
		if(v[i]%2==0)
		{
			p++;
		}
		else
		{
			d++;
		}
	}	
	
}

void som(int v[],int N,int &s)
{
	int i;
	for(i=0;i<N;i++)
	{
		s+=v[i];
	}
}

int valmax(int v[],int N)
{
	int i;
	int max=0;
	for(i=0;i<N;i++)
	{
		if(v[i]>max)
		{
			max=v[i];
		}
	}
	return max;
}
int main()
{

	int N=10;
	int array[N];
	int pari=0,dispari=0;
	int somma;
	int max;
	
	gen(array,N);
	
	pardis(array,N,pari,dispari);
	
	display(array,N);
	
	som(array,N,somma);
	
	max=valmax(array,N);
	
	cout<<"i numeri pari contati= "<<pari<<endl;
	cout<<"i numeri dispari contati= "<<dispari<<endl;
	
	cout<<"la somma di tutti i numeri dentro array= "<<somma<<endl;
	
	cout<<"il numero piu' alto dentro l'array= "<<max<<endl;
}
