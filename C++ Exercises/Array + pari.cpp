//Marco Longo Minnolo 3J esercizio 2
#include <iostream>
#include <cmath>
using namespace std;

void array(int v[], int n)
{
    for(int i = 0; i < 10; i++)
	{
        cin >> v[i];
    }
}
void pari(int v[], int n)
{
    for(int i = 0; i < n; i++)
	{
        if(v[i] % 2 == 0)
		{
            cout << v[i] << " ";
        }
        else
		{
            continue;
        }
    }
}

int main()
{ 
    int v[10];
    cout <<"Inserisci gli elementi dell'array: ";
    array(v, 10);
    cout <<endl;
    cout <<"Numeri pari presenti nell'array: ";
    pari(v, 10);
}
