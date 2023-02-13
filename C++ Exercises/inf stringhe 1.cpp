#include <iostream>
#include <cstring>

using namespace std;

int conta(string s, char carattere){
	int conta = 0;
	
	for(int i = 0; s[i] != '\0'; i++)
		conta = s[i] == carattere ? conta + 1 : conta;
		
	return conta;
}

int main(){
	
	string stringa;
	char carattere = 'a';
	
	cout << "Scrivi una frase: ";
  	std::getline (std::cin, stringa);
  	
  	//nel caso in cui si volesse migliorare il programma in modo tale da chiedere il carattere da cercare 
  	//rimuovere i commenti dalle linee qui sotto... dato che il programma è stato sviluppato predispondendo questa funzione
  	
	//cout << "Inserisci il carattere da cercare";
	//cin >> carattere;
	
	cout << "Le volte che il carattere '" << carattere << "' e' apparso nella frase: " << endl << stringa << endl << "Volte:" << conta(stringa,carattere);
	
}
