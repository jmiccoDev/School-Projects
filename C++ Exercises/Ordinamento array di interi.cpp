#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void scambia(int & n1, int & n2) {
  int temp;
  temp = n1;
  n1 = n2;
  n2 = temp;
}

void exchangeSort(int array[], int dimensione) {
  for (int i = 0; i < dimensione - 1; i++)
    for (int j = i + 1; j < dimensione; j++)
      if (array[i] > array[j])
        scambia(array[i], array[j]);
}

void Arraycasuale(int array[], int dimensione) {
  srand(time(NULL));
  for (int i = 0; i < dimensione; i++) {
    array[i] = rand() % 100 + 1;
  }
}

void displayArray(int array[], int dimensione) {
  cout << "[";
  for (int i = 0; i < dimensione; i++) {
    if (i != dimensione - 1) {
      cout << array[i];
      cout << ", ";
    } else {
      cout << array[i];
    }
  }
  cout << "]";
}

int main() {
  int dimensione;
  cout << "Dimensione dell'Array: ";
  cin >> dimensione;
  int array[dimensione];
  cout << endl;
  cout << endl;
  cout << "L'Array Ordinato è: ";
  Arraycasuale(array, dimensione);
  displayArray(array, dimensione);
  cout << endl;
  cout << endl;
  cout << "L'Array è Ordinato: ";
  exchangeSort(array, dimensione);
  displayArray(array, dimensione);
  return 0;
}
