/*Definire la struttura dati Auto che descrive un'automobile in base a marca, cilindrata, anno di immatricolazione e acquirente 
(l'acquirente è caratterizzato da soli nome e cognome). Scrivere un programma C++ che, dichiarata la tabella Autosalone di tipo Auto
(per comodità se ne fissi la dimensione a 10  elementi), consenta di inserire da tastiera i dati delle auto vendute e di visualizzare 
il solo cognome degli acquirenti di auto di cilindrata superiore a 1500 cc, oltre al numero totale di auto che sono state immatricolate
in un anno richiesto all'utente.*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
struct Auto{
	string marca;
	int cilindrata;
    string anno_di_immatricolazione;
	string cognome;
	string nome;
};
Auto Inserimento(){
	Auto x;
	cout << "Inserire marca" << endl;
	cin >>x.marca;
	cout << "Inserire cilindrata" << endl;
	cin >>x.cilindrata;
	cout << "Inserire anno_di_immatricolazione" << endl;
	cin >>x.anno_di_immatricolazione;
	cout << "Inserire cognome" << endl;
	cin >>x.cognome;
	cout << "Inserire nome" << endl;
	cin >>x.nome;
	
	return x;
}
void DISPLAY(Auto V[], int N, int cilindrata){
	for (int i=0; i< N; i++)
	{
		if(V[i].cilindrata >= cilindrata)
		{
			cout << "_ _ _ _ _ _ _ _ _" << endl;
			cout << V[i].marca<< endl;
			cout << V[i].anno_di_immatricolazione << endl;
			cout << V[i].cognome << endl;
			cout << V[i].nome << endl;
			cout << V[i].cilindrata << endl;
			cout << "_ _ _ _ _ _ _ _ _" << endl;
		}
	}
}
void DISPLAYall(Auto V[], int N){
	for (int i=0; i< N; i++)
	        cout << "_ _ _ _ _ _ _ _ _" << endl;
			cout << V[i].marca<< endl;
			cout << V[i].anno_di_immatricolazione << endl;
			cout << V[i].cognome << endl;
			cout << V[i].nome << endl;
			cout << V[i].cilindrata << endl;
			cout << "_ _ _ _ _ _ _ _ _" << endl;
		
	
}
void DISPLAY_1500(Auto V[], int N)
{
	DISPLAY( V, N, 1500);
}
int main(){
	int[] Array;
	cout << "1. Visualizza Auto" << endl;
	cout << "2. Visualizza cilindrata >= 1500" << endl;
    cout << "3. Inserisci nuova Auto" << endl;
    cout << "4. Fine applicazione" << endl;
    
    cout << "Seleziona opzione:";
    cin>>x;
    
    switch (x)
{
case 1:
	 DISPLAYall ()
break;
case 2:

break;

case 3:

break;

case 4:

break;
default:

break;
}

