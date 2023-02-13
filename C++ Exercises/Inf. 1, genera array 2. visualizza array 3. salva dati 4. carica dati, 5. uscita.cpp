#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int Dimensione = 10;

void salvataggioDati(int array[], int dimesione) {
  ofstream file;
  file.open("file.txt", ios::out);
  cout << "Salvataggio Dei Dati..";
  for (int i = 0; i < dimesione; i++) {
    file << array[i] << " ";
  }
  file.close();
}
void caricaDati(int array[], int dimesione) {
  ifstream file;
  file.open("file.txt", ios:: in );
  cout << "Caricamento Dei Dati.." << endl;
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
void displayArray(int array[], int dimesione) {
  cout << endl;
  cout << "Array: ";
  cout << "[";
  for (int i = 0; i < dimesione; i++) {
    if (i != dimesione - 1) {
      cout << array[i];
      cout << ", ";
    } else {
      cout << array[i];
    }
}
  cout << "]";
}
void generaArray(int array[], int dimesione) {
  srand(time(NULL));
  for (int i = 0; i < dimesione; i++) {
    array[i] = rand() % 100 + 1;
  }
}
int main() {
  ofstream file1;
  int risposta;
  int array[Dimensione];
  do{
    cout << endl;
    cout << endl;
    cout << "1. Generazione dell'Array" << endl;
    cout << "2. Visualizzazione dell'Array" << endl;
    cout << "3. Salva Dati" << endl;
    cout << "4. Carica Dati" << endl;
    cout << "5. Esci dal prgramma" << endl << endl;
    cout << endl;
    cout << "Inserisci risposta: ";
    cin >> risposta;

    switch (risposta) {
    case 1:
      generaArray(array, Dimensione);
      break;
      
    case 2:
      displayArray(array, Dimensione);
      break;
      
    case 3:
      salvataggioDati(array, Dimensione);
      break;
      
    case 4:
      caricaDati(array, Dimensione);
      break;
    }

  }while (risposta != 5);
  
  return 0;

}
