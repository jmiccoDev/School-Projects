#include <iostream>
using namespace std;

int differenza (int max, int min)
{
	int d;
	d= max - min;
	return d;
}
int main(){
	int max, min;
	
	cout << "Inserisci il valore massimo" << endl;
	cin >> max;
	cout << "Inserisci il valore minimo" << endl;
	cin >> min;
		
	cout << "La differenza equivale a:" << endl;
	cout << differenza (max, min) << endl;

}
