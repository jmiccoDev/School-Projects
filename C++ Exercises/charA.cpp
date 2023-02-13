#include <iostream>
#include <string>
using namespace std;

//Data una frase inserita dall'utente dire quante volte appare la a minuscola

int charA(string frase, char a){
	int cont = 0;
	for(int i = 0; i < frase.size()-1; i++)
		if(frase[i] == a)
			cont++;
		return cont;
}


int main(){
	string frase;
	
	cout << "Inserisci una frase: ";
	getline(cin, frase);
	cout << charA(frase, 'a');
}
