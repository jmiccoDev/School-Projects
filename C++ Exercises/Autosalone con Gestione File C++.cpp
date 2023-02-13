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

void AutoAnnoFunzione(int dimensioneSalone, Auto tabella[], int anno) {
  cout << "Inserisci anno di Immatricolazione: ";
  cin >> anno;
  int c = 0;
  for (int i = 0; i < dimensioneSalone; i++) {
    if (tabella[i].annoImmatricolazione == anno) {
      c++;
    }
  }
  cout << "Macchine con quell'anno di Immatricolazione: " << c << endl;
}

void mostraAuto(Auto tabella[], int lunghezza) {
  for (int i = 0; i < lunghezza; i++) {
    cout << endl;
    cout << endl;
    cout << "----------------------------------|" << i + 1 << "|--------------------------------" << endl;
    cout << "Nome Acquirente: " << tabella[i].nomeAcquirente << endl;
    cout << "Cognome Acquirente: " << tabella[i].cognomeAcquirente << endl;
    cout << "Marca Automobile: " << tabella[i].marca << endl;
    cout << "Cilindrata in cc: " << tabella[i].cilindrata << endl;
    cout << "Anno di Immatricolazione: " << tabella[i].annoImmatricolazione << endl;
    cout << "----------------------------------------------------------------------" << endl;
    cout << endl;

  }
}

void salvaDati(Auto tabella[], int lunghezza) {

  ofstream outputFile;
  outputFile.open("Output.txt", ios::out);
  for (int i = 0; i < lunghezza; i++) {
  	outputFile << tabella[i].nomeAcquirente << endl;
    outputFile << tabella[i].cognomeAcquirente << endl;
    outputFile << tabella[i].marca << endl;
    outputFile << tabella[i].cilindrata << endl;
    outputFile << tabella[i].annoImmatricolazione << endl;
  }
  outputFile.close();
}

void caricaDati(Auto tabella[], int size) {
  ifstream inputFile;
  inputFile.open("Output.txt", ios:: in );
  cout << "Dati caricati" << endl << endl;
  if (inputFile.is_open()) {
    int i = 0;
    while (!inputFile.eof()) {
    	getline(inputFile, tabella[i].nomeAcquirente);
      getline(inputFile, tabella[i].cognomeAcquirente);
      inputFile >> tabella[i].marca;
      inputFile >> tabella[i].cilindrata;
      inputFile >> tabella[i].annoImmatricolazione;

      i++;
      if (i == dimensioneSalone) {
        break;
      }

    }
    inputFile.close();
  } else {
    cout << "ERRORE IN APERTURA";
  }

}

void mostraAuto1500cc(Auto tabella[], int lunghezza) {
  for (int i = 0; i < lunghezza; i++) {
    if (tabella[i].cilindrata > 1500) {
      cout << "----------------------------------|" << i + 1 << "|---------------------------------" << endl;
      cout << endl;
      cout << "Nome Acquirente: " << tabella[i].nomeAcquirente << endl;
      cout << "Cognome Acquirente: " << tabella[i].cognomeAcquirente << endl;
      cout << "Marca Automobile: " << tabella[i].marca << endl;
      cout << "Cilindrata in cc: " << tabella[i].cilindrata << endl;
      cout << "Anno di Immatricolazione: " << tabella[i].annoImmatricolazione << endl;
      cout << "----------------------------------------------------------------------" << endl;
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
  int anno;
  do {
    cout << "MENU" << endl;
    cout << "1. Inserisci informazioni di un auto " << endl;
    cout << "2. Visualizza lista " << endl;
    cout << "3. Visualizza lista delle auto con cilindrata maggiore a 1500cc " << endl;
    cout << "4. Quante macchine hanno questo anno di Immatricolazione" << endl;
    cout << "5. Salva Salone " << endl;
    cout << "6. Carica Salone " << endl;
    cout << "7. Esci dal salone " << endl;
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
      AutoAnnoFunzione(dimensioneSalone, tabella, anno);
      break;
    case 5:
      salvaDati(tabella, dimensioneSalone);
      break;
    case 6:
      caricaDati(tabella, dimensioneSalone);
      break;
    }
  } while (risposta != 7);

  cout << endl;
  cout << "Salvataggio Dati..." << endl;
  salvaDati(tabella, dimensioneSalone);
  cout << "Salvataggio Completato!" << endl;
  cout << "Arrivederci :)";
}
