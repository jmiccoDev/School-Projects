/*
immettere come parametri: giorni, ore, minuti e secondi e fare un programma
con le funzioni che restituisca i secondi totali
MARCO LONGO MINNOLO
*/
#include <iostream>
using namespace std;

int convertitore(int g, int h, int m, int s, int tot)
{
	int gS, hS, mS;
	gS = g * 86400;
	hS = h * 3600;
	mS = m * 60;
	tot = (gS + hS + mS + s);
	return tot;
}

int main()
{
	int g, h, m, s, tot;
	cout <<"BENVENUTO NEL CONVERTITORE DI TEMPO" <<endl;
	cout <<"Inserisci qui sotto il numero di giorni, ore, minuti e secondi, \n ne alcolerò il numero di secondi totali" <<endl;
	cout <<"Giorni: ";
	cin >> g;
	cout <<"Ore: ";
	cin >> h;
	cout <<"Minuti: ";
	cin >> m;
	cout <<"Secondi: ";
	cin >> s;
	cout <<"Il totale di secondi presenti nel tempo inserito equivale a: "<<convertitore(g, h, m, s, tot);
}

