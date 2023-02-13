#include<iostream>
#include<ctime> 
#include<cstdlib>
using namespace std;

int main(){
	int n;
	
	cout << "Inserire lunghezza array: " << endl;
	cin >> n;
	cout << "-----------------------" << endl;
	
	int array[n];
	srand (time(NULL));
	
	for(int i=0; i<n; i++){
		array[i] = rand()%100;
		cout << array[i] << endl;
	}
	
	for(int i=0; i<n; i++){
		if(array[i]%2==0){
			array[i] = array[i]*2;
		}else{
			array[i] = array[i]*3;
		}
	}
	
	cout << "------------------------" << endl;
	for(int i=0; i<n; i++){
		cout << array[i] << endl;
	}
	
}
