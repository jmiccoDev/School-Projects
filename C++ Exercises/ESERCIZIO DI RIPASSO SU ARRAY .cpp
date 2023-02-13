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
void funzioneArray(int v[], int N, int &P, int &D){
	P = 0;
	D = 0;
	for(int i = 0; i < N; i++){
		if(v[i] % 2 == 0){
		v[i] *= 2;
		P++;
		}
		else{
			v[i] *= 3;
		D++;	
		}
		
	}
}

int main(){

	int N, P,D;
	
	cout<<"inserisci la dimensione dell'array ";
	cin >>N;
	int array[N];
	
	random(array,N);
	
	visualizzaarray(array,N);
	
	funzioneArray(array,N, P, D);
	
	cout << "i numeri pari sono stati raddoppiati e i dispari sono stati triplicati "<< endl;
	
	visualizzaarray(array,N);
		cout << "Numeri pari nell'array sono : " << P << endl;
	
		cout << "Numeri dispari nell'array sono : " << D;	
}
