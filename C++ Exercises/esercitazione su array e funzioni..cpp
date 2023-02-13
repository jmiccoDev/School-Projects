#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <time.h>

using namespace std;

void display (int v[],int n){
	for(int i=0;i<n;i++){
		cout<< v[i] << endl;
	}
}

void random(int v[],int n,int a, int b){
	for(int i=0; i<n; i++){
		v[i]=a+rand()%b;
	}
}

int main (){
	int n,a, b, z= 0;
	cout <<"inserisci la dimensione dell'array ";
	cin >> n;
	int array[n];
	
	cout <<"inserisci il numero random da :  ";
	cin >> a;
	
	cout <<"a : ";
	cin >> b;
	
	random(array,n,a,b);
	
	display(array,n);
	
	
}

