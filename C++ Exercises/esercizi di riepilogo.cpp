#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void scambia(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
	
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


void randomArray(int array[], int dimensione) {
  srand(time(NULL));
  for (int i = 0; i < dimensione; i++) {
  	array[i] = rand() % 50 + 1;
  }
}

void funzioneArray(int array[], int dimensione, int &pari, int &dispari, int &somma, int &massimo){
	pari = 0;
	dispari = 0;
	somma = 0;
	massimo = array[0];
	for(int i = 0; i < dimensione; i++){
	    somma += array[i];
	    if(array[i] > massimo){
			massimo = array[i];
		}
		scambia(array[i], array[i + 1]);
		if(array[i] % 2 == 0)
		pari++;
		else
		dispari++;
	}
}

int main(){
	int array[10];
	int somma = 0;
	int dispari = 0;
	int pari = 0;
	int massimo = 0;
	
	randomArray(array, 10);
	displayArray(array, 10);
	funzioneArray(array, 10, pari, dispari, somma, massimo);
	cout << endl;
	cout << endl;
	cout << "Numeri pari nell'array: " << pari << endl;
	
	cout << "Numeri dispari nell'array: " << dispari << endl;
		
	cout << "Somma Array: " << somma << endl;
	
	cout << "Massimo Array: " << massimo;
}

