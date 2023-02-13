#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;


int arrayCopy(int array1[], int lenght, int array2[], int min, int max){
	int conta = 0;
	for(int i = 0; i < lenght; i++){
		array2[i] = array1[i] > min && array1[i] < max ? array1[i] : 0;
		conta += array1[i] > min && array1[i] < max ? 1 : 0;

	}
	return conta;
}

void arrayInput(int array[], int lenght){
	for(int i = 0; i < lenght; i++){
		cout << "Inserisci un numero nell'elemento " << i << ": ";
		cin >> array[i];
	}
}


void arrayDisplay(int array[], int lenght){
	
	for(int i = 0; i < lenght; i++){
		cout << array[i] << endl;
	}
	
}

int main(){
	
	
	
	int v[3], v2[3];
	
	arrayInput(v, 3);
	arrayCopy(v,3,v2,10,20);
	
	arrayDisplay(v2,3);
	
	
	
}
