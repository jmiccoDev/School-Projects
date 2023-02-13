#include <iostream>
#include <cmath>
using namespace std;


	int SommaAreaQuadrato(int L){
	
	int Area, somma = 0;
		
	for(int i = 1; i <= L; i++){
		Area = pow(i, 2);
		somma += Area; 
	}
	
	return somma;
} 


int main(){
	
	int L;
	cout << "Immettere il lato: ";
	cin >> L;	
	cout << endl;
	cout << "Somma Area Quadrati da 1 a " << L << " : " << SommaAreaQuadrato(L);
}
