#include <cmath>
#include <iostream>
#include <cstdlib>
using namespace std;

float area(float b, float h)
{
	int a;
	a = (b * h) / 2;
	return a;
}

float perimetro(float b, float h)
{
	float p, L;
	L = ((p * 2) - b) / 2;
	p = (b * 2) + (h * 2);
	return p;
}

int main()
{
	float b, h;
	cout <<"Base del triangolo: ";
	cin >> b;
	cout <<endl;
	cout <<"Altezza del triangolo: ";
	cin >> h;
	cout <<endl;
	cout <<"Area del triangolo: "<<area(b, h);
	cout <<endl;
	cout <<"Perimetro del triangolo: "<<perimetro(b, h);
}
