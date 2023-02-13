#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void randomArray(int arr[], int size){
	srand(time(NULL));
	
	for(int i = 0; i < size; i++){
		int random = rand() % 50 + 1;
		arr[i] = random;
	}
}



int functionArray(int arr[], int size){
	int max = arr[0];
	int min = arr[0];
	for(int i = 0; i < size; i++){
		if(max < arr[i]){
			max = arr[i];
		}
		if(min > arr[i]){
			min = arr[i];
		}
	}
	
	return max - min;
}



int main(){
	int size;

	cout << "Inserisci grandezza array: ";
	cin >> size;
	
	int arr[size];
	
	cout << "Inserisci elementi array: ";
	for(int i = 0; i < size; i++){
		cin >> arr[i];
	}
	//randomArray(arr, size);
	cout << "Array: ";
	for(int i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << functionArray(arr, size);;
}
