#include <iostream>

#include <cmath>

using namespace std;

/* ALUNNO: GIUSEPPE FRANCESCO IRA CLASSE: 3J  DATA: 11/03/2022    [ESERCIZIO 1] */

/* Funzione Calcolo del perimetro con formula */
double perimetro(int l) {
  return l * 3;
}

/* Funzione Calcolo dell'area con formula */
double area(double l) {
  return (sqrt(3) * pow(l, 2)) / 4;
}

/* Main con inserimento delle variabili */
int main() {
  double l;
  cout << "Inserisci lato: ";
  cin >> l;
  cout << endl;
  cout << "Perimetro: " << perimetro(l);
  cout << endl;
  cout << "Area: " << area(l);
}
