#include <iostream>
#include <cstdlib>
#include <ctime>
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
  	arr[i] = rand() % 50 + 1;
  }
}

void funzioneArray(int ar[], int size, int &pari, int &dispari){
	pari = 0;
	dispari = 0;
	for(int i = 0; i < size; i++){
		if(ar[i] % 2 == 0)
		pari++;
		else
		dispari++;
	}
}

int main(){
	int ar[10];
	
	int dispari = 0;
	int pari = 0;
	
	randomArray(ar, 10);
	displayArray(ar, 10);
	funzioneArray(ar, 10, pari, dispari);
	cout << endl;
	cout << endl;
	cout << "Numeri pari nell'array: " << pari << endl;
	
	cout << "Numeri dispari nell'array: " << dispari;	
}
