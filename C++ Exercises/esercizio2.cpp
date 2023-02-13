#include <iostream>

#include <cmath>

using namespace std;
/* ALUNNO: GIUSEPPE FRANCESCO IRA CLASSE: 3J  DATA: 11/03/2022   [ESERCIZIO 2] */

/* Dichiarazione costante globale */
const int N = 15;

/* Funzione inserimento array */
void inserisciArray(int v[], int size) {
  for (int i = 0; i < N; i++) {
    cout << "Inserisci il #" << i << " elemento dell'array: ";
    cin >> v[i];
  }
}

/* Funzione che visualizza solo i numeri dispari all'interno dell'array */
void calcoloArray(int v[], int size) {
  cout << endl;
  for (int i = 0; i < N; i++) {
    if (!(v[i] % 2 == 0)) {
      cout << v[i] << " ";
    } else {
      continue;
    }
  }
}
/*Main con inserimento dell'array e richiamo delle funzioni scritte sopra*/
int main() {
  int v[N];
  inserisciArray(v, N);
  cout << endl;
  cout << "Numeri dispari: ";
  calcoloArray(v, N);

  return 0;
}
