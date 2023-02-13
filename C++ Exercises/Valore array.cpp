/*
DATO UN ARRAY MONODIMENSIONALE DI N ELEMENTI INTERI CON N INSERITO DALL'UTENTE.
1. INSERIRE NELL'ARRAY VALORI RANDOM COMPRESI FRA 1 E 100.
2. VISUALIZZARE L'ARRAY
3. AGGIORNARE GLI ELEMENTI DELL'ARRAY CON IL VALORE DOPPIO     SE E' PARI CON IL TRIPLO SE E' DISPARI.
MARCO LONGO MINNOLO 3J
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void rand(int v[], int n)  // ARRAY RANDOM
{
	srand(time(NULL));
	for(int i = 0; i < n; i++)
	{
		int random = rand()%100 + 1;
		v[i] = random;
	}
}

int visual(int v[], int n)  //VISUALIZZATORE ARRAY
{
	for(int i = 0; i < n; i++)
	{
		cout <<v[i] <<", ";
	}
}

void valore_aggiornato(int v[], int n)
{
	for(int i= 0; i < n; i++)
	{
		if(v[i] % 2 == 0)
		{
			v[i] = v[i] * 2;
		}
		else
		{
			v[i] = v[i] * 3;
		}
	}
}

int main()
{
	int n;
	cout <<"Inserisci la grandezza dell'array: ";
	cin >> n;
	cout <<endl;
	int v[n];
	rand(v, n);
	cout <<"Array: " <<endl;
	cout <<visual(v, n);
	cout <<endl;
	cout <<"Valore aggiornato array: ";
	valore_aggiornato(v, n);
	cout <<endl;
	cout <<visual(v, n);
}
