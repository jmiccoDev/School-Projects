#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
	
	/*
		Maurizio Palano 22 Esercizio 3
		
		Realizzare un’applicazione C++ con le seguenti funzioni per array di interi di dimensione N
		inserita dall’utente:
		a. VisualizzaArray: Visualizza sullo schermo gli elementi dell’array.
		b. RiempiArray: imposta tutti gli elementi dell’array con numeri casuali compresi fra -
		10 e 10.
		c. SommaArray: restituisce la somma di tutti gli elementi dell’array.
		d. MaxArray: restituisce il valore massimo contenuto nell’array ed il suo indice.
		
		
	*/
	
void VisualizzaArray(string nameArray, int array[], int length){
	for(int i = 0; i < length; i++){
			cout << "[Index: " << i << ", Valore: " << array[i] << "]" << endl;
		
	}
	
}

void RiempiArray(int array[], int lenght, int min, int max) {
	srand(time(NULL));
	
	for(int i = 0; i < lenght; i++){
	    array[i] = rand() % (max - min + 1) + min;
	}
}

int SommaArray(int array[], int lenght){
    int somma = 0;
	for(int i = 0; i < lenght; i++){
		somma += array[i];
	}
	
	return somma;
}

void MaxArray(int array[], int lenght, int &max,  int &index){
	max = array[0];
	
	for(int i = 0; i < lenght; i++){
		if(array[i] > max){
			max = array[i];
			index = i;
		}
		
	}

}

int main() {
	
	int length;
	cout << "Inserisci la lunghezza dell'array: ";
	cin >> length;

    int array[length];
    
    RiempiArray( array, length,-10,10);
    VisualizzaArray("array", array, length);
	int somma = SommaArray(array,length);
	int max, indice;
	MaxArray(array,length, max, indice);
	
	
	cout << "Somma: " << somma << endl;
	cout << "Max: " << max << endl;
	cout << "Indice nMax: " << indice;

}
