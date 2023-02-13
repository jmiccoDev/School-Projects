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

int funzioneArray(int array[], int dimensione, int min, int max) {
  int cont = 0;
  for (int i = 0; i < dimensione; i++) {
    if (array[i] >= min && array[i] <= max) {
      cont++;
    }
  }
  return cont;
}

int main() {

  int dimensione;
  int min = 10;
  int max = 20;

  cout << "Inserisci il minimo: ";
  cin >> min;
  cout << endl;
  cout << "Inserisci il massimo: ";
  cin >> max;

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
  cout << "Numero di elementi che soddisfano le condizioni: " << funzioneArray(array, dimensione, min, max);

}
