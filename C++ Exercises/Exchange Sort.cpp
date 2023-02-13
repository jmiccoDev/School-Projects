#include <iostream>

using namespace std;

void scambia(int & n1, int & n2) {
  int temp;
  temp = n1;
  n1 = n2;
  n2 = temp;
}

void exchangeSort(int arr[], int size) {
  for (int i = 0; i < size - 1; i++)
    for (int j = i + 1; j < size; j++)
      if (arr[i] > arr[j])
        scambia(arr[i], arr[j]);
}

void randomArray(int arr[], int size) {
  srand(time(NULL));
  for (int i = 0; i < size; i++) {
    arr[i] = rand() % 100 + 1;
  }
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

int main() {
  int size;
  cout << "Dimensione dell'Array: ";
  cin >> size;
  int arr[size];
  cout << endl;
  cout << endl;
  cout << "Array Ordinato: ";
  randomArray(arr, size);
  displayArray(arr, size);
  cout << endl;
  cout << endl;
  cout << "Array Ordinato: ";
  exchangeSort(arr, size);
  displayArray(arr, size);
  return 0;
}