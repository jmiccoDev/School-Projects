/*
DATO UN ARRAY MONODIMENSIONALE DI N ELEMENTI INTERI CON N INSERITO DALL'UTENTE.
1. INSERIRE NELL'ARRAY VALORI RANDOM COMPRESI FRA 1 E 100.
2. VISUALIZZARE L'ARRAY
3. AGGIORNARE GLI ELEMENTI DELL'ARRAY CON IL VALORE DOPPIO     SE E' PARI CON IL TRIPLO SE E' DISPARI.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>
using namespace std;


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
void Arraycasuale(int array[], int dimensione) {
  srand(time(NULL));
  for (int i = 0; i < dimensione; i++) {
  	array[i] = rand() % 100 + 1;
  }
}

void funzioneModifica(int array[], int dimensione){
	
	for(int i = 0; i < dimensione; i++){
		if(array[i] % 2 == 0){
			array[i] * 2;
		}
		else{
			array[i] * 3;
			
		}
	}
}
int main(){
	int dimensione;
	cout << "Inserisci dimensione array: ";
	cin >> dimensione;
	int array[dimensione];
	Arraycasuale(array, dimensione);
	
	displayArray(array, dimensione);
	
	return 0;
}
