#include <iostream>


using namespace std;
	
	/*
		Maurizio Palano 22 Esercizio 4
		
		Data una stringa contenente una frase inserita dall’utente, realizzare le seguenti funzioni:
		a. Upper restituisce una stringa con tutte le lettere maiuscole.
		b. Lower restituisce una stringa con tutte le lettere minuscole.
		c. FirstUpper restituisce la frase con la prima lettera di ogni parola maiuscola e le altre
		minuscole.
		d. CountWords effettui un conteggio di quante parole sono contenute nella frase.
		(attenzione due spazi consecutivi sono ammessi e non sono due parole)
		
		
	*/
	
string Upper(string stringa){
	for(int i = 0; i < stringa.length(); i++){
		if(stringa[i] >= 97 && stringa[i] <= 122) // controlo se minuscola
			stringa[i] = (char)stringa[i] - 32;
	}
	
	return stringa;
	
	
}

string Lower(string stringa){
	for(int i = 0; i < stringa.length(); i++){
		if(stringa[i] >= 65 && stringa[i] <= 90) // controlo se minuscola
			stringa[i] = (char)stringa[i] + 32;
	}
		return stringa;

}

string FirstUpper(string stringa){
	stringa = Lower(stringa);
	for (int i = 0; i < stringa.length(); i++)
	{
		if (i == 0)
			stringa[i] = (char)stringa[i] - 32;
		else if (stringa[i - 1] == ' ')
			stringa[i] = (char)stringa[i] - 32;
		
	}

	return stringa;
}

int CountWords(string stringa){
	int parole = 1;
	for (int i = 0; i < stringa.length(); i++){			
		if (stringa[i] == ' ' && stringa[i - 1] != ' ' && i != 0)
			parole++;
			
		
	}
	
	return parole;
	
}


int main() {
	
	
	string stringa;
    cout << "Scrivi una frase: ";
    getline(cin, stringa);
    
    cout << "Stringa in Uppercase: " << Upper(stringa) << endl;
    cout << "Stringa in Lowercase: " << Lower(stringa) << endl;
	cout << "Stringa in FirstUpper: " << FirstUpper(stringa) << endl;
    cout << "Le parole dentro la frase sono: " << CountWords(stringa);

	

}
