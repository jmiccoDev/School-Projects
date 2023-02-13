#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void randomArray(int array[], int dimensione){
	srand(time(NULL));
	  for (int i = 0; i < dimensione; i++) {
    	int random = rand() % 50 + 1;
    	array[i] = random;
		}
  }

int funzioneArray(int array[], int dimensione, int minimo, int massimo) {
  int cont = 0;
  for (int i = 0; i < dimensione; i++) {
    if (array[i] >= minimo && array[i] <= massimo) {
      cont++;
    }
  }
  return cont;
}

int main() {

  int dimensione;
  int minimo = 10;
  int massimo = 20;

  cout << "Inserisci il minimo: ";
  cin >> minimo;
  cout << endl;
  cout << "Inserisci il massimo: ";
  cin >> massimo;

  cout << "Inserisci dimensione array: ";
  cin >> dimensione;
  int array[dimensione];
  
  
  randomArray(array, dimensione);
  
  
  cout << endl;
  cout << "Array: ";

  cout << "[ ";
  for (int i = 0; i < dimensione; i++) {
    cout << array[i] << " ";
  }
  cout << "]";


  cout << endl;
  cout << endl;
  cout << "Numero di elementi che soddisfano le condizioni: " << funzioneArray(array, dimensione, minimo, massimo);

}
