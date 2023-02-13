#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

  srand(time(NULL));
  int r, somma;
  int array[10];

  for (int i = 0; i < 10; i++){
    r = rand() % 100 + 1;
    array[i] = r;
    somma += array[i];
  }

  cout << "La somma degli elementi dell'array equivale a: " << somma;
}
