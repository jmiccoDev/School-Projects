#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>
using namespace std;


void displayArray(int arr[], int size) {
  cout << "[";
  for (int i = 0; i < size; i++) { 
    if (i != size - 1) {
      cout << arr[i];
      cout << ", ";
    } else {
      cout << arr[i]; 
    }
  }
  cout << "]";
}



void randomArray(int arr[], int size) {
  srand(time(NULL));
  for (int i = 0; i < size; i++) {
  	arr[i] = rand() % 100 + 1;
  }
}

void funzioneModifica(int arr[], int dimensione){
	
	for(int i = 0; i < dimensione; i++){
		if(arr[i] % 2 == 0){
			arr[i] * 2;
		}
		else{
			arr[i] * 3;
			
		}
	}
}
int main(){
	int dimensione;
	cout << "Digitare dimensione array: ";
	cin >> dimensione;
	int arr[dimensione];
	randomArray(arr, dimensione);
	fnzione
	displayArray(arr, dimensione);
	
	return 0;
}
