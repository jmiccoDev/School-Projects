/*
Creare un programma c++ che converta il valore di un numero in binario
MARCO LONGO MINNOLO
*/
#include <iostream>
using namespace std;

void convertitore(int x)
{
    if(x != 0)
	{
        convertitore(x/2);
        cout <<x%2;
    }
}

int main()
{
    int n;
    cout << "Inserisci numero da convertire in binario: ";
    cin >> n;
    cout << endl;
    cout << "Risultato conversione: ";
    convertitore(n);
}
