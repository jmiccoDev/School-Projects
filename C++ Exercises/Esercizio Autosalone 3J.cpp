#include <iostream>
#include <string>
using namespace std;

struct Auto {
 string marca;
 string cilindrata;
 string annoimmatricolazione;
 string nome;
 string cognome;	
	
};

const int size = 10;
Auto lista[size];


void guardaacquirenti(Auto [], int size){
	for(int i = 1; i <= size; i++)
		cout << i << ") " << "Cognome:" << lista[i].cognome << " Marca:" << lista[i].marca << " Cilindrata: " << lista[i].cilindrata << " Anno di Immatricolazione: " << lista[i].annoimmatricolazione << endl;
	
}

void inserisciauto(Auto [], int size, int i){
	cout << "Digitare prima il cognome dell'acquirente, poi digitare la marca, poi anno di immatricolazione e infine la cilindrata del motore ";
	cin >> lista[i].cognome >> lista[i].marca >> lista[i].annoimmatricolazione >> lista[i].cilindrata;
}




int main(){
	int i = 1;
	int selezione = 0;
	do{
	    cout << endl;
		cout << "-----------Selezionare operazione Autosalone-----------" << endl;
		cout << "---Digitare 1 Visualizza auto vendute---" << endl;
		cout << "---Digitare 2 Immetti nuova auto venduta---" << endl;
	
	
						
		cin >> selezione;
		
		if(selezione == 2){
			inserisciauto(lista, size, i);
			i++;
		}
		else if(selezione == 1){
			guardaacquirenti(lista, size);
		}
	}while(i < size && selezione != 3);
}
	

