#include<iostream>
using namespace std;

int main(){
	int B;
	int b;
	int h;
	int A;
	
	cout << "Inserisci la base maggiore" << endl;
	cin >> B;
	cout << "Inserisci la base minore" << endl;
	cin >> b;
	cout << "Inserisci l'altezza" << endl;
	cin >> h;
	
	A=((B+b)*h)/2;
	cout << "L'area :"<<A<<endl;
}
