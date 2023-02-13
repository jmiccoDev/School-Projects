#include <iostream>

using namespace std;

/*
	Maurizio Palano 3J
	Convertitore da base decimale a binaria
	
*/

//Funzione che ritorna il numero in base decimale sottoforma di stringa.
string converti(int base10){
	//inizializzo una stringa vuota dove metterò i resti delle divisioni
	string base2 = "";
	
	//While affinche non si arrivi a 0
	while (base10 != 0) {
		//Nel caso in cui il resto è zero imposta base2 a zero più se stessa, stessa cosa con l'1
		if (base10 % 2 == 0)
			base2 = "0" + base2;
		else
			base2 = "1" + base2;
		//Effettua la divisione in modo tale che la prossima volta i risultati saranno diversi e che questo non sia un ciclo infinito
		base10 = base10 / 2;
	}
	//Quando ha evidentemente finito tutto ritorna base2
	return base2;
}

int main(){
	int base10;
	
	cout << "Inserisci il numero in base 10: ";
	cin >> base10;
	
	cout << "Il numero convertito in base 2 e': " << converti(base10);
	
}


