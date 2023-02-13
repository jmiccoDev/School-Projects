#include <iostream>

#include <string>

#include <fstream>

using namespace std;
const int dimensioneSalone = 10;

struct Auto {
  string marca;
  int cilindrata;
  int annoImmatricolazione;
  string nomeAcquirente;
  string cognomeAcquirente;
};

Auto tabella[dimensioneSalone];

void inserisciAuto(Auto macchina, Auto tabella[], int i) {
  cout << " - Inserisci informazione riguardo la tua auto - " << endl << endl;
  cout << "Inserisci marca della tua auto: ";
  cin.ignore();
  getline(cin, tabella[i].marca);
  cout << "Inserisci cilindrata dell'auto in cc: ";
  cin >> tabella[i].cilindrata;
  cout << "Inserisci l'anno dell'immatricolazione della tua auto: ";
  cin >> tabella[i].annoImmatricolazione;
  cout << "Inserisci il nome del venditore: ";
  cin.ignore();
  getline(cin, tabella[i].nomeAcquirente);
  cout << "Inserisci il cognome del venditore: ";
  getline(cin, tabella[i].cognomeAcquirente);
}

void mostraAuto(Auto tabella[], int lunghezza) {
  for (int i = 0; i < lunghezza; i++) {
    cout << endl;
    cout << "Nome Acquirente: " << tabella[i].nomeAcquirente << endl;
    cout << "Cognome Acquirente: " << tabella[i].cognomeAcquirente << endl;
    cout << "Marca Automobile: " << tabella[i].marca << endl;
    cout << "Cilindrata in cc: " << tabella[i].cilindrata << endl;
    cout << "Anno di Immatricolazione: " << tabella[i].annoImmatricolazione << endl;
    cout << "-----------------------------------------------------------------------" << endl;
    cout << endl;

  }
}

void salvaDati(Auto tabella[], int lunghezza) {

  ofstream outputFile;
  outputFile.open("Output.txt", ios::out);
  for (int i = 0; i < lunghezza; i++) {

    outputFile << "Nome Acquirente: " << tabella[i].nomeAcquirente << endl;
    outputFile << "Cognome Acquirente: " << tabella[i].cognomeAcquirente << endl;
    outputFile << "Marca Automobile: " << tabella[i].marca << endl;
    outputFile << "Cilindrata in cc: " << tabella[i].cilindrata << endl;
    outputFile << "Anno di Immatricolazione: " << tabella[i].annoImmatricolazione << endl;
    outputFile << "-----------------------------------------------------------------------" << endl;
    outputFile << endl;
  }
  outputFile.close();
}

void caricaDati() {
  ifstream inputFile;
  inputFile.open("Output.txt", ios:: in );
  cout << "Dati caricati: ";
  string line;
  if (inputFile.is_open()) {
    while (getline(inputFile, line)) {
      cout << line;
    }
  }
}

void mostraAuto1500cc(Auto tabella[], int lunghezza) {
  for (int i = 0; i < lunghezza; i++) {
    if (tabella[i].cilindrata > 1500) {
      cout << endl;
      cout << "Nome Acquirente: " << tabella[i].nomeAcquirente << endl;
      cout << "Cognome Acquirente: " << tabella[i].cognomeAcquirente << endl;
      cout << "Marca Automobile: " << tabella[i].marca << endl;
      cout << "Cilindrata in cc: " << tabella[i].cilindrata << endl;
      cout << "Anno di Immatricolazione: " << tabella[i].annoImmatricolazione << endl;
      cout << "-----------------------------------------------------------------------" << endl;
      cout << endl;
    } else {
      continue;
    }
  }
}

int main() {
  int i = 0;
  Auto macchina;
  int risposta;
  do {
    cout << "MENU" << endl;
    cout << "1. Inserisci informazioni di un auto " << endl;
    cout << "2. Visualizza lista " << endl;
    cout << "3. Visualizza lista delle auto con cilindrata maggiore a 1500cc " << endl;
    cout << "4. Carica dati dell'ultimo salone salvato " << endl;
    cout << "5. Esci dal salone " << endl;
    cout << endl;
    cout << "Inserisci la tua risposta: ";
    cin >> risposta;
    switch (risposta) {
    case 1:
      inserisciAuto(macchina, tabella, i);
      i++;
      break;

    case 2:
      mostraAuto(tabella, dimensioneSalone);
      break;

    case 3:
      mostraAuto1500cc(tabella, dimensioneSalone);
      break;
    case 4:
      caricaDati();
      break;
    }
  } while (risposta != 5);

  cout << endl;
  cout << "Salvataggio Dati..." << endl;
  salvaDati(tabella, dimensioneSalone);
  cout << "Salvataggio Completato!" << endl;
  cout << "Arrivederci :)";
}