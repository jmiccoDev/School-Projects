/*
dato un array di dimensione n, creare le seguenti funzioni:
1. creare la funzione display per visualizzare i dati.
2. carica numeri random compresi fra M ed N passati come paramentri alla funzione.
3. raddoppia: che modifica l'array mettendo per ogni valore il doppio.
4. somma: che restituisce la somma dei valori nell'array.
5. min: restituisce il valore più piccolo presente nell'array.
6. copia: copia l'array in un altro array delle stesse dimensioni passato alla funzione.
MARCO LONGO MINNOLO
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void display(int v[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << v[i] <<endl;
	}
}

void rand(int v[], int n, int N, int M)
{
	int i;
	for(i = 0; i < N; i++)
	{
		v[i] = N + rand()%M;
	}
}

int raddoppia(int v[], int n)
{
	
}

int somma(int v[], int n)
{
	int s = 0;
	for(int i= 0; i < n; i++)
	{
		s += v[i];
	}
}

int min(int v[], int n)
{
	
}

int copia(int v[], int n)
{
	
}

int main()
{
	cout <<"Inserisci il numero di valori presenti nell'array: " <<endl;
	cin >> n <<endl;
}
