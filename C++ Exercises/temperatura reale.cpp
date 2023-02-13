#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double T;
	double t;
	double v;
	
	cout << "Inserisci la velocità del vento "<<endl;
	cin>>v;
	cout << " mph "<<endl;
	
	cout << "Inserisci la temperatura reale "<<endl;
	cin>>T;
	cout << " C "<<endl;
	
	if(v<=5)
		cout << "Errore";
	else{
		t=33+(0.45+0.29*sqrt(v)-0.02*v)*(T-33);
		cout << t;
	}
}
