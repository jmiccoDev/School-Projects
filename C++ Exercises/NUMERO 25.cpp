#include <iostream>
#include <cstdlib>

using namespace std;

int  visualizzaarray(int v[],int N){
	int i;
	for(i=0;i<N;i++){
		cout<<v[i]<<endl;				
		}
	}
	

void random(int v[],int N, int a,int b){
	int i;
	for(i=0; i<N ;i++){
		v[i]=a+rand()%b;
	}
}


int differenza(int v[],int N) {
	int max = v[0];
	int min = v[0];
	
	for(int i= 0; i<N;i++){
		if(max< v[i]){
			max = v[i];
		}
		if(min > v[i]){
			min = v[i];
	}
}
return (max - min);
}

		
int main(){
	
	int b,a;
	int N = 0,D= 0,S= 0;

	cout<<"inserisci la dimensione dell'array ";
	cin >>N;
	int array[N];
	
	cout<<"inserisci numero ramdom da ";
	cin>>a;
	
	cout<<"fino a ";
	cin>>b;
	
	random(array,N,a,b);
	
	visualizzaarray(array,N);
	
	D= differenza(array , N);
	
	cout << "la differenza e' " << D << endl;

	
	
	
}
