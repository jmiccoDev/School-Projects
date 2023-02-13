#include <iostream>

using namespace std;

/*
	Maurizio Palano 3J
	creare le seguenti funzioni:
	1. dato un array calcolare quanti numeri pari contiene.
	2. dato un array calcolare quanti numeri dispari contiene.
	3. dato un array calcolare LA SOMMA degli elementi.
	4. dato un array calcolare il valore massimo.
	5. creare una funzione "scambia" che dati due interi
	   ne inverta il valore.

*/

int arrayCalcoloPari(int array[], int lenght){
	int nPari = 0;
	for(int i = 0; i < lenght; i++)
		nPari = array[i] % 2 == 0 ? nPari + 1 : nPari;
			
	return nPari;
}

int arrayCalcoloDispari(int array[], int lenght){
	int nDispari = 0;
	for(int i = 0; i < lenght; i++)
		nDispari = array[i] % 2 != 0 ? nDispari + 1 : nDispari;
			
	return nDispari;
}

int arrayCalcoloSomma(int array[], int lenght){
	int somma = 0;
	for(int i = 0; i < lenght; i++)
		somma += array[i];
			
	return somma;
}

int arrayCalcoloMax(int array[], int lenght){
	int max = array[0];
	for(int i = 0; i < lenght; i++)
		max = array[i] > max ? array[i] : max;
			
	return max;
}

void scambia(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
	
}

int main(){
	int lenght = 5;
	int array[lenght] = {5,6,2,3,4};
	
	cout << "Pari: " << arrayCalcoloPari(array,lenght) << endl;
	cout << "Dispari: " << arrayCalcoloDispari(array,lenght) << endl;
	cout << "Somma: " << arrayCalcoloSomma(array,lenght) << endl;
	cout << "Max: " << arrayCalcoloMax(array,lenght) << endl;
	
	int a = 2, b = 3;
	
	cout << "A:" << a << endl;
	cout << "B:" << b << endl;
	
	scambia(a,b);
	cout << "Valroi scambiati" << endl;

	cout << "A:" << a << endl;
	cout << "B:" << b << endl;
	
}
