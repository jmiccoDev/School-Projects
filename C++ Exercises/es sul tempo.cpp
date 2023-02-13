/* Creare una funzione che riceve una quantità di tempo
in formato ore, minuti e secondi e la restituisce
espressa solamente in secondi.
Creare poi un programma che si faccia passare due quantità di tempo
e verifichi quale è maggiore utilizzando la funzione precedente
e solamente due if nel programma.*/

#include <iostream>
using namespace std;

int main ()
{
	int giorni,ore,minuti,secondi;
	int somma;
	somma=0
	
		cout<<"inserire i giorni : ";
	cin>>giorni; 
	
	cout<<"inserire le ore: ";
	cin>>ore;
	
		cout<<"inserire i minuti:";
	cin>>minuti;
	
		cout<<"inserire i secondi: ";
	cin>>secondi ;
	
}
int tempo(int giorni,int ore, int minuti, int secondi)
{
	giorni= giorni* 365
	ore= ore* 8760
	minuti = minuti * 525600 
	secondi = secondi *31536000
	
	somma= giorni + ore + minuti + secondi ;
	return somma;
}
