#include <iostream>
using namespace std;

int Contatore(string frase, char a){
	int x;
	x=0;
	for(int i=0; i<frase.size()-1; i++)
		if(frase[i] == 'a')
			x++;
		return x;
}

int main(){
	string frase;
	
	cout << "Inserisci una frase: ";
	getline(cin, frase);
	cout << Contatore(frase, 'a');
}
