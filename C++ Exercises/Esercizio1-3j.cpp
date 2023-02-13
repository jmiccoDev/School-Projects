//dato un array numeri casuali,visualizzare array non ordinato e poi visualizzarla odinata dal numero più piccolo a quello più grande
#include <iostream>
#include <ctime>
using namespace std;

void InserimentoArray(int array[],int n){
	srand (time(NULL));
	for(int i=0; i<n; i++){
		array[i]=rand()%100 +1;
	}
}


void Display(int array[],int n){
	for(int i=0; i<n; i++){
		cout << array[i] << endl;
	}
}


void OrdinamentoArray(int array[],int n){
	int acc;
	for(int i=0; i<n-1;i++){
		for(int j=i+1;j<n; j++){
			if(array[i]>array[j]){
				acc=array[i];
				array[i]=array[j];
				array[j]=acc;
			}
		}
	}
}


int main(){
	int a;
	int b;
	int n;
	cout << "Inserire lunghezza array " << endl;
	cin >> n;
	
	int array[n];
	InserimentoArray(array,n);
	cout << "I valori dell'array non ordinati: " << endl;
	Display(array,n);
	cout << "-----------------------------------" << endl;
	OrdinamentoArray(array,n);
	cout << "I valori dell'array ordinati: " << endl;
	Display(array,n);	
}
