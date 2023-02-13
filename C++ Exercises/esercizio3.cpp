#include <iostream>

#include <cstdlib>

#include <ctime>

#include <cmath>

using namespace std;
/* ALUNNO: GIUSEPPE FRANCESCO IRA CLASSE: 3J  DATA: 11/03/2022  [ESERCIZIO 3] */

/* Funzione che mostra a schermo l'array */
void displayArray(int arr[], int N) {
  cout << "[";
  for (int i = 0; i < N; i++) {
    if (i != N - 1) {
      cout << arr[i];
      cout << ", ";
    } else {
      cout << arr[i];
    }
  }
  cout << "]";
}
/* Funzione che passa i parametri formali dell'array (passato per riferimento) e della dimensione dello stesso */
int sommaArray(int v[], int N) {
  int sum = 0;
  for (int i = 0; i < N; i++) {
    sum += v[i];
  }

  return sum;
}

/* Funzione void dove vengono passati diversi parametri tra cui l'array, la sua dimensione, l'elemento massimo ed il suo relativo indice */
void maxArray(int v[], int N, int & maxIndex, int & max) {
  max = v[0];
  maxIndex = 0;
  for (int i = 0; i < N; i++) {
    if (max < v[i]) {
      max = v[i];
      maxIndex = i;
    }
  }
}
/* Funzione che ritorna l'array pieno di valori pseudo-randomici con un intervallo di valori tra 15 e -15 */
void randomArray(int arr[], int N) {
  srand(time(NULL));
  for (int i = 0; i < N; i++) {
    arr[i] = rand() % (15 + 15) - 15;
  }
}

/* Main con inserimento variabili, array e dichiarazione di variabili che utilizzeremo insieme alle funzioni */
int main() {
  int N, max, maxIndex;
  cout << "Inserisci una dimensione: ";
  cin >> N;
  int v[N];
  randomArray(v, N);
  cout << endl;
  cout << "Array: ";
  displayArray(v, N);
  cout << endl;
  cout << endl;
  cout << "Somma Array: " << sommaArray(v, N);

  maxArray(v, N, maxIndex, max);
  cout << endl;
  cout << "Massimo Elemento nell'Array: " << max;
  cout << endl;
  cout << "Indice del Massimo Elemento nell'Array: " << maxIndex;

  return 0;
}
