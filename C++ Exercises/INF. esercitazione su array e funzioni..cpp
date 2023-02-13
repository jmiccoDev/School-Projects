#include <iostream>

#include <ctime>

#include <cstdlib>

using namespace std;



void Arrayx2(int array[], int dimensione){
	
	for(int i = 0; i < dimensione; i++){
		array[i] *= 2;
	}
	
	for(int i = 0; i < dimensione; i++){
		cout << array[i] << " ";
	}
}

void minArray(int array[], int dimensione){
	
	int min = array[0];
	
	for(int i = 0; i < dimensione; i++){
		
		if(!(array[i] < array[i])){
			min = array[i + 1];
		}
	}
	cout << min;
}
void copiaArray(int array[], int copia_array[], int dimensione){
	copia_array[dimensione];
	for(int i = 0; i < dimensione; i++){
		copia_array[i] = array[i];
	}
	
	for(int i = 0; i < dimensione; i++){
		cout << copia_array[i] << " ";
	}
}




int sommaArray(int array[], int dimensione){
	int sum = 0;
	
	for(int i = 0; i < dimensione; i++){
		sum += array[i];
	}
	
	return sum;

}




void displayArray(int array[], int n){
	for(int i = 0; i < n; i++){
		cout << array[i] << " ";
	}
}

int randomMN(int array[], int dimensione, int m, int n){
	srand(time(NULL));	
	int copia_array[dimensione];
	for(int i = 0; i < n; i++){
	int random = rand()% n + m;
	array[i] = random;
	
	}
	
	
	cout << endl;
	displayArray(array, dimensione);
	cout << endl;
	cout << "Totale Array: " << sommaArray(array, dimensione);
	cout << endl;
	cout << "Copia Array: ";
    copiaArray(array,copia_array, dimensione);
    cout << endl;
    cout << "Numero minore nell'Array: ";
    minArray(array, dimensione);
	cout << endl;
    cout << "Array x2: ";
    Arrayx2(array, dimensione);
    

}


int main(){
	
	
	int dimensione, m, n;

	
	cout << "Digitare la dimensione dell'array: ";
	cin >> dimensione;
	cout << "Digitare intervallo di numeri casuali: ";
	cin >> m >> n;
	
	
	int numeri[dimensione];
	
	randomMN(numeri, dimensione, m, n);
	
	
	
	
}
