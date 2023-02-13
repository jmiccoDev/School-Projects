/*
creare le seguenti funzioni:
1. dato un array calcolare quanti numeri pari contiene.
2. dato un array calcolare quanti numeri dispari contiene.
3. dato un array calcolare LA SOMMA degli elementi.
4. dato un array calcolare il valore massimo.
5. creare una funzione "scambia" che dati due interi ne inverta il valore.
MARCO LONGO MINNOLO 3J
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void scambia(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

void rand(int v[], int n)
{
  srand(time(NULL));
  for (int i = 0; i < n; i++)
  {
      v[i] = rand()% 20 + 1;
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

int npari(int v[], int n)
{
	int contP = 0;
	for(int i = 0; i < n; i++)
	{
		if(v[i] % 2 == 0)
		{
        	contP++;
    	}
	}	
    return contP;
}

int ndispari(int v[], int n)
{
	int contD = 0;
	for(int i = 0; i < n; i++)
	{
		if(v[i] % 2 != 0)
		{
        	contD++;
    	}
	}
    return contD;
}

int visual(int v[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		cout <<v[i] <<", ";
	}
}

int main()
{
	int n, a, b;
	cout <<"Inserisci la grandezza dell'array: ";
	cin >> n;
	cout <<endl;
	int v[n];
	rand(v, n);
	cout <<"Array: " <<endl;
	cout <<visual(v, n);
	cout <<endl;
	cout <<"Numeri pari presenti nell'array: "<<npari(v, n);
	cout <<endl;
	cout <<"Numeri dispari presenti nell'array: "<<ndispari(v, n);
	cout <<endl;
	cout <<"La somma dei valori presenti nell'array equivale a: "<<somma(v, n) <<endl;
	cout <<"Inserisci un valore: ";
	cin >> a;
	cout <<"Inserisci un altro valore: ";
	cin >> b;
	cout <<"A = "<<a<<" B = "<<b<<endl;
	scambia(a, b);
	cout <<"A = "<<a<<" B = "<<b<<endl;
}
