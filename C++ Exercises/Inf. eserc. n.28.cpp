#include <iostream>
using namespace std;

int prodotto_numeratori(int n1, int n2){
	int prodotto;
	
	prodotto = n1 * n2;
	
	return prodotto;
	

	
}

int prodotto_denominatori(int d1, int d2){
	int prodotto;
	
	prodotto = d1 * d2;
	return prodotto;
	

	
}


int main(){
	int n1, d1, n2, d2;
	
	cout << "Digitare il primo numeratore ed il secondo numeratore: ";
	cin >> n1 >> n2;
	cout << "`Digitare il primo denominatore ed il secondo denominatore: ";
	cin >> d1 >> d2;
	
	cout << "Prodotto fra frazioni: " << endl;
	cout << prodotto_numeratori(n1, n2) << endl;
	cout << "-" << endl;
	cout << prodotto_denominatori(d1, d2);
	
	
	
}
