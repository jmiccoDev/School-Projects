/*
Scrivere una funzione c++ che, a partire dalle
coordinate cartesiane di 2 punti, ne calcoli la distanza.
Scrivere un programma C++ che,
dopo aver chiesto all'utente le coordinate
di tre punti del piano cartesiano, calcoli il perimentro
del triangolo avente i 3 punti come vertici.
MARCO LONGO MINNOLO
*/
#include <iostream>
#include <cmath>
using namespace std;

float distanza(float x1, float x2, float y1, float y2)
{
	float d;
	d = sqrt((y1-y2)*(y1-y2)+(x1-x2)*(x1-x2));
	
	return d;
}

float perimetro(float d1, float d2, float d3, float x1, float x2, float y1, float y2)
{
	float P, x3, y3;
	d1 = (x1 - x2)*(y1 - y2);
	d2 = (x2 - x3)*(y2 - y3);
	d3 = (x3 - x1)*(y3 - y1);
	P = (d1 + d2 + d3);
	return P;
}

int main()
{
	float d, d1, d2, d3, x1, x2, x3, y1, y2, y3, P;
	cout <<"Inserisci le coordinate del primo punto: " <<endl;
	cout <<"Punto 1: X = ";
	cin >> x1;
	cout <<endl;
	cout <<"Punto 1: Y = ";
	cin >> y1;
	cout <<endl;
	cout <<"Inserisci le coordinate del secondo punto: " <<endl;
	cout <<"Punto 2: X = ";
	cin >> x2;
	cout <<endl;
	cout <<"Punto 2: Y = ";
	cin >> y2;
	cout <<endl;
	cout <<"Inserisci le coordinate del terzo punto: " <<endl;
	cout <<"Punto 3: X = ";
	cin >> x3;
	cout <<endl;
	cout <<"Punto 3: Y = ";
	cin >> y3;
	cout <<endl;
	cout <<"La distanza tra i primi 2 punti inseriti equivale a: "<<distanza(x1, x2, y1, y2);
	cout <<endl;
	cout <<"Il perimetro dei punti inseriti equivale a: "<<perimetro(d1, d2, d3, x1, x2, y1, y2);
}

