#include <iostream>

#include <cstring>

using namespace std;
	
	/*
		Maurizio Palano 22 Esercizio 2
		
		Dato un array di N elementi interi, con N costante globale di 10 elementi, realizzare
		a. Una funzione che consenta l’inserimento degli elementi dell’array da tastiera.
		b. Una funzione che visualizzi gli elementi dell’array pari.
		
		
	*/

const int length = 10;

void arrayInput(string nameArray, int array[], int length){
	for(int i = 0; i < length; i++){
		cout << "Inserisci un valore da mettere dentro l'array " << nameArray << " nell'index " << i << " ':";
		cin >> array[i];
	}
	
}

void arrayDisplayEven(string nameArray, int array[], int length){
	cout << "Visualizzo gli elementi pari dell'array " << nameArray << "... " << endl;
	for(int i = 0; i < length; i++){
		if(array[i] % 2 == 0)
			cout << "[Index: " << i << ", Valore: " << array[i] << "]" << endl;
		
	}
	
}

int main() {

    int array[length];
    
    arrayInput("Array", array,length);
    arrayDisplayEven("Array", array,length);
	


}
