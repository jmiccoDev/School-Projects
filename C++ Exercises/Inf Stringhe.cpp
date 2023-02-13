#include <iostream>

#include <cstring>

using namespace std;
	
	/*
		Maurizio Palano 22
		
		scrivere un programma c++ che visualizzi il carattere che si ripete più volte in una stringa inserita dall'utente e il numero di ripetizioni
	*/

void conta(string s, int &volte, char &carattere) {
	//Trasformo la stringa in un array di caratteri

	int lenght = 0;
    
	for(int i = 0; ; i++)
		lenght++;
		
	char maxChar;
    int voltemax = 0;
    
	//For che passa per ogni lettera della stringa
    for (int i = 0; i < s[i] != '\0'; i++) {
        int volte = 0;
        //controllo quante volte viene detta la prima lettera
        for (int j = 0; j < s[j] != '\0'; j++) 
        	//Se la prima lettera è uguale alla lettera controllata attualmente allora aggiunge +1 a volte
            volte = s[i] == s[j] ? volte + 1 : volte;
                
        //Se le volte sono maggiore di voltemax allora 'se lo salva'
        if (volte > voltemax) {
            voltemax = volte;
            maxChar = s[i];
        }
    }
    
    volte = voltemax;
    carattere = maxChar;

}
int main() {

    string stringa;
    int volte;
	char carattere;

    cout << "Scrivi una frase: ";
    std::getline(std::cin, stringa);
	
	conta(stringa, volte, carattere);
	
    cout << "Le volte che il carattere '" << volte << "' e' apparso nella frase: " << endl << stringa << endl << "Volte:" << carattere;

}
