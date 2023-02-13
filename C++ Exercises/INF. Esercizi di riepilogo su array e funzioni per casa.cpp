#include <iostream>

#include <cstdlib>

#include <ctime>

using namespace std;

void scambia(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
	
}

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

void funzioneArray(int ar[], int size, int &pari, int &dispari, int &sum, int &max){
	pari = 0;
	dispari = 0;
	sum = 0;
	max = ar[0];
	for(int i = 0; i < size; i++){
	    sum += ar[i];
	    if(ar[i] > max){
			max = ar[i];
		}
		scambia(ar[i], ar[i + 1]);
		if(ar[i] % 2 == 0)
		pari++;
		else
		dispari++;
	}
}

int main(){
	int ar[10];
	int sum = 0;
	int dispari = 0;
	int pari = 0;
	int max = 0;
	
	randomArray(ar, 10);
	displayArray(ar, 10);
	funzioneArray(ar, 10, pari, dispari, sum, max);
	cout << endl;
	cout << endl;
	cout << "Numeri pari: " << pari << endl;
	
	cout << "Numeri dispari: " << dispari << endl;
		
	cout << "Totale Array: " << sum << endl;
	
	cout << "Max Array: " << max;
}

