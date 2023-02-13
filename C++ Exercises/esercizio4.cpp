#include <iostream>

#include <string>

using namespace std;
/* ALUNNO: GIUSEPPE FRANCESCO IRA CLASSE: 3J  DATA: 11/03/2022  [ESERCIZIO 4] */

/* Funzione che conta le parole utilizzando anche diverse funzioni della libreria string */
int countWords(string messaggio) {
  int count = 0;
  for (int i = 0; i < messaggio.length() - 1; i++) {
    if (messaggio[i] == ' ') {
      count++;
      if (messaggio[i + 1] == ' ') {
        count--;
        continue;
      }
    }
  }
  return count + 1;
}

/* Funzione che trasforma le lettere maiuscole in minuscole, se si trovano già in minuscolo non altera lo stato del carattere */
string toLowerCase(string & stringa) {
  for (int i = 0; i < stringa.size(); i++) {
    if (stringa[i] >= 'A' && stringa[i] <= 'Z') {
      stringa[i] += 32;
    }
  }
  return stringa;
}

/* Funzione che trasforma le variabili minuscole in maiuscole se si trovano già in maiuscolo non altera lo stato del carattere */
string toUpperCase(string & stringa) {
  for (int i = 0; i < stringa.size(); i++) {
    if (stringa[i] >= 'a' && stringa[i] <= 'z') {
      stringa[i] -= 32;
    }
  }
  return stringa;
}

/* Funzione che trasforma le prime lettere di ogni parola in maiuscola, se si trovano già in maiuscolo non altera lo stato del carattere della parola presa in considerazione */
string firstLetterCapitalized(string String) {

  if (String[0] >= 'a' && String[0] <= 'z') {
    String[0] -= 32;
  }

  for (int i = 0; i < String.length(); i++) {
    if (String[i] == ' ' && !(String[i + 1] >= 'A' && String[i + 1] <= 'Z')) {
      String[i + 1] -= 32;
    }
  }
  return String;
}

/* Main con richiamo delle varie funzioni e con inserimento della variabile "messaggio" utilizzando la funzione di input getline() fornita dalla libreria string */
int main() {
  string messaggio;
  cout << "Inserisci un messaggio: ";
  getline(cin, messaggio);
  cout << endl;
  cout << "Messaggio con le maiuscole all'inizio: " << firstLetterCapitalized(messaggio) << endl;
  cout << "Messaggio sono con le minuscole: " << toLowerCase(messaggio) << endl;
  cout << "Messaggio sono con le maiuscole: " << toUpperCase(messaggio) << endl;
  cout << "Conteggio delle parole: " << countWords(messaggio) << endl;
}
