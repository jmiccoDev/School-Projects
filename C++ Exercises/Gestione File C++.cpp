#include <iostream>

#include <cstdlib>

#include <ctime>

#include <fstream>

using namespace std;

int dimensione = 10;

void salvaDati(int arr[], int size) {
  ofstream file;
  file.open("file.txt", ios::out);
  cout << "Salvataggio Dati...";
  for (int i = 0; i < size; i++) {
    file << arr[i] << " ";
  }
  file.close();
}

void caricaDati(int arr[], int size) {
  ifstream file;
  file.open("file.txt", ios:: in );
  cout << "Carica Dati..." << endl;
  cout << endl;
  cout << "Dati: ";
  string line;
  if (file.is_open()) {
    while (getline(file, line)) {
      cout << line;
    }
  }

  file.close();
}

void displayArray(int arr[], int size) {
  cout << endl;
  cout << "Array: ";
  cout << "[";
  for (int i = 0; i < size; i++) {
    if (i != size - 1) {
      cout << arr[i];
      cout << ", ";
    } else {
      cout << arr[i];
    }
  }
  cout << "]";
}

void generaArray(int arr[], int size) {
  srand(time(NULL));
  for (int i = 0; i < size; i++) {
    arr[i] = rand() % 100 + 1;
  }
}

int main() {
  ofstream file1;
  int risposta;
  int arr[dimensione];
  do {
    cout << endl;
    cout << endl;
    cout << "1. Genera Array" << endl;
    cout << "2. Visualizza Array" << endl;
    cout << "3. Salva Dati" << endl;
    cout << "4. Carica Dati" << endl;
    cout << "5. Esci" << endl << endl;
    cout << endl;
    cout << "Inserisci rispota: ";
    cin >> risposta;

    switch (risposta) {
    case 1:
      generaArray(arr, dimensione);
      break;

    case 2:
      displayArray(arr, dimensione);
      break;
    case 3:
      salvaDati(arr, dimensione);
      break;
    case 4:
      caricaDati(arr, dimensione);
      break;
    }

  } while (risposta != 5);
  return 0;
}