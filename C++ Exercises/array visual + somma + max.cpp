// Marco Longo Minnolo 3J esercizio 3
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void random(int v[], int n)
{
  srand(time(NULL));
  for (int i = 0; i < n; i++)
  {
      v[i] = rand()% (10 + 10) - 10;
  }
}

int somma(int v[], int n)
{
	int somma = 0;
	for(int i = 0; i < n; i++)
	{
        somma += v[i];
    }
    return somma;
}

void visual(int v[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout <<v[i] <<", ";
	}
}

void max(int v[], int n, int &Nmax, int &NmaxI)
{
	NmaxI = 0;
	Nmax = 0;
	for(int i = 0; i < n; i++)
	{
		if(Nmax < v[i])
		{
			Nmax = v[i];
			NmaxI = i;
		}
	}
}

int main()
{
	int n, Nmax, NmaxI;
	cout <<"Inserisci la grandezza dell'array: ";
	cin >> n;
	cout <<endl;
	int v[n];
	random(v, n);
	cout <<"Array: ";
	visual(v, n);
	cout <<endl;
	cout <<"Somma degli elementi dell'array: "<<somma(v, n);
	cout <<endl;
	max(v, n, Nmax, NmaxI);
	cout <<"Numero maggiore presente nell'array: "<< Nmax <<" ed il suo indice e': "<<NmaxI;
}
