#include <iostream>
using namespace std;

int somma (int a, int b)
{
	int s;
	s=a+b;
	return s;
}

int main ()
{
	int x;
	x = somma (8,10);
	cout << "Il risultato è :" << x;
	return 0
}
