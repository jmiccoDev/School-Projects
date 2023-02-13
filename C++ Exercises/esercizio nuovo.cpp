// Dato un numero intero N inserito dall'utente visualizzare i primi 10 numeri divisibili per N
#include <iostream>

using namespace std;

int main()
{
int x, N;
cout << "Inserisci un numero: ";
cin >> x;
cout << "Inserisci per quale numero deve essere diviso: ";
cin >> N;

for(int i = 1; x >= N && i <= 10; i++){
	if(x % N == 0){
		x = x / N;
		cout << "Numero " << i << ":    " << x << endl;
	}
	
}

}
