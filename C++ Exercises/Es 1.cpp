#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;


int arrayMin(int array[], int lenght){
	int min = array[0];
	
	for(int i = 0; i < lenght; i++)
		min = min > array[i] ? array[i] : min;
	
	return min;
}

int arrayMax(int array[], int lenght){
	int max;
	
	for(int i = 0; i < lenght; i++)
		max = max < array[i] ? array[i] : max;
	
	return max;
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

int diff(int a, int b){
	int temp = a;
	if(a < b){
		a = b;
		b = temp;	
	}
	
	return a - b;
		
}
int main(){
	int array[3];
	int min, max;
	
	arrayInput(array, 3);

	min = arrayMin(array, 3);
	max = arrayMax(array, 3);
	
	cout << "La differenza e' di: " << diff(max, min);
	
	
	
}
