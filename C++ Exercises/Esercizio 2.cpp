#include <iostream>
using namespace std;


int SommaAreaRettangolo(int l, int n){
	
	int Area, somma = 0;	
	
	for(int i = 1; i <= n; i++){
		
		Area = l * i;
		
		somma += Area; 
	}	
	return somma;
}


int main(){
	
	int l, n;
	cout << "Digitare un numero: ";
	cin >> l >> n;
	cout << "Somma tra " << l << " e " << n << " e' equivalente a " << SommaAreaRettangolo(l, n);
			
}
