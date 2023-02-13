#include <ctime>
#include <iostream>
#include <cstdlib>

using namespace std;

int  visualizzaarray(int v[],int N){
	int i;
	for(i=0;i<N;i++){
		cout<<v[i]<<endl;				
		}
}

void random(int v[],int N){
	for(int i=0; i<N ;i++){
		v[i]= rand() % 100 + 1;
	}
}

int somma(int v[], int N){
	int R;
	for(int i=0; i<N ;i++){
		R += v[i];
	}
	return R-N;
}

void funzioneArray(int v[], int N, int &P, int &D){
	P = 0;
	D = 0;
	for(int i = 0; i < N; i++){
		if(v[i] % 2 == 0){
		P++;
		}
		else{
		D++;	
		}
		
	}
}

int massimo(int v[], int N){
	int max=  v[0];
    for(int i = 0; i < N; i++){
	if( v[i] >  max)
	max = v[i];
	}
	return max;
}

void scambio(int &a, int &b){
    int scambio;
    
    scambio = a;
    a = b ;
    b = scambio ;
}

int main(){

	int N, P,D,S,M, a,b;
	
	cout<<"inserisci la dimensione dell'array " ;
	cin >>N;
	int array[N];
	
	cout <<" inserisci il primo  valore da scambiare " ; 
	cin >> a;
	cout <<" inserisci il secondo  valore da scambiare " ; 
	cin >> b;
	
	
	random(array,N);
	
	visualizzaarray(array,N);
	
	funzioneArray(array,N, P, D);
	
	scambio(a,b);
	
	M = massimo(array, N);
	
	S= somma(array, N );
	
	
		cout << "Numeri pari nell'array sono : " << P << endl;
	
		cout << "Numeri dispari nell'array sono : " << D << endl ; 	
		
		cout <<"la somma dei numeri dell'array sono : " << S << endl;
		
		cout <<"il valore massimo dell'array risulta : " << M << endl;
		
		cout << "i valori sono stati scambiati "<< a << "  " << b << endl;
		
		
		
}
