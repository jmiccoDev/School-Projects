#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	
	/*
		Maurizio Palano 3J 
		
		Creare un array di 10 numeri interi
		Inserire in esso valori random compresi fra 1 e 100
		Visualizzare l'array
		Calcolare e visualizzare la somma.
	*/
	
	srand(time(NULL));
	int somma = 0;
	int array[10];
	for(int i = 0; i < 10; i++) {
		array[i] = rand() % 100 + 1;
		somma+= array[i];
		cout << "Elemento n" <<  i  << ": " << array[i] << endl;
	}
	
	cout << "La somma e': " << somma;
	
}
