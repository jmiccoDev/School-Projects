#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int x, somm;
	srand(time(NULL));
  	int array[10];
  	for (int i = 0; i < 10; i++)
  	{
  		x = rand()%100 + 1;
    	array[i] = x;
    	somm += array[i];
    	cout<< array[i] <<endl;
	}
    cout << "La somma degli elementi generati equivale a: "<<somm <<endl;
}
