#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int Ncompresi(int V[], int m, int M, int n){
	
	int ris;
	ris = 0;
	for(int i = 0; i < n; i++){
	    if(V[i]>m && V[i]<M){
	    	ris++;
		}
	}
	return ris;
}

int somma(int V[], int m, int M, int n){
	
	int sum;
	sum = 0;
	for(int i = 0; i < n; i++){
	    if(V[i]>m && V[i]<M){
	    	sum+=V[i];
		}
	}
	return sum;	
}

int main(){
	
	int n;
	int M;
	int m;
	cout << "Inserisci la dimensione dell'array " << endl;
	cin >> n;
	
	cout << "Inserisci il massimo " << endl;
	cin >> M;
	cout << "Inserisci il minimo " << endl;
	cin >> m;
	cout << "--------------------------------" << endl;
	
	srand(time(NULL));
	int V[n];
	
	for(int i = 0; i < n; i++){
	    V[i] = rand() %100;
	    cout << V[i] << endl;
	} 
	
	cout << "--------------------------------" << endl;
	cout << "I numeri compresi fra  " << m << " e " << M << " sono: "<< Ncompresi(V,m,M,n) << endl;
	cout << "I numeri compresi sommati tra di loro danno: " << somma(V,m,M,n);

}
