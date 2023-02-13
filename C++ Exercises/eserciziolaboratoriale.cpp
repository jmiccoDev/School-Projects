#include <iostream>
#include <string>
using namespace std;


struct contatti{
	string nome;
	string cognome;
	string telefono;
		
};

const int size = 10;
contatti lista[size];


void visualizza(contatti lista[], int size){
	for(int i = 1; i <= size; i++)
		cout << i << ") " << "Cognome: " << lista[i].cognome << "\t Nome: " << lista[i].nome << "\t Telefono: " << lista[i].telefono << endl;
	
}

void inserisci(contatti contatto[], int size, int i){
	cout << "Inserisci nome, cognome e numero di telefono: ";
	cin >> lista[i].nome >> lista[i].cognome >> lista[i].telefono;
}

	
	
int main(){
	int i = 1;
	int scelta = 0;
	do{
	    cout << endl;
		cout << "Scegli operazione" << endl;
		cout << "1 Inserisci contatto" << endl;
		cout << "2 Visualizza contatto" << endl;
		cout << "3 Esci " << endl;
						
		cin >> scelta;
		
		if(scelta == 1){
			inserisci(lista, size, i);
			i++;
		}
		else if(scelta == 2){
			visualizza(lista, size);
		}
	}while(i < size && scelta != 3);
}