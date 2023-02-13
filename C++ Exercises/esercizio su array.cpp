#include <iostream>

#include <ctime>

#include <cstdlib>

using namespace std;

int main() {

  srand(time(NULL));
  int random, somma;

  int numeri[10];




  for (int i = 0; i < 10; i++) 
  {

    random = rand() % 100 + 1;
    numeri[i] = random;

    somma += numeri[i];
  }


  cout << "la somma: " << somma;

  return 0;
}
