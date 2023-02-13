#include<iostream>
#include<ctime>
using namespace std;

void display(int v[],int N){
	
	for (int i=0; i<N; i++){
		cout << v[i] << endl;
	}
}

void CaricaValori(int v[],int N,int m, int M){
	
	srand(time(NULL));
	
	for (int i=0; i<N; i++){
		v[i] = m-rand()%M;
	}
}

void Raddoppio(){
	
}

int Somma(int v[],int N){
	
	int sum = 0;
	for (int i=0; i<N; i++){
		sum+=v[i];
	}
	return sum;
}

int Min(int v[],int N){
	
	int min = N;
	for (int i=0; i<N; i++){
		if(min<v[i])
			min=v[i];
	}
	return min;
}

int main(){
	
	int N;
	int M;
	int m;
	cout << "Inserisci la dimensione dell'array " << endl;
	cin >> N;
	cout << "Inserisci il minimo del numero casuale generabile " << endl;
	cin >> m;
	cout << "Inserisci il massimo del numero casuale generabile " << endl;
	cin >> M;	
	int array [N];
	
	CaricaValori(array,N,M,m);
	display(array,N);
	cout << "La somma e' " << Somma(array,N) << endl;
	cout << "Il minimo e' " << Min(array,N) << endl;
	
}
