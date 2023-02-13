#include <iostream>
using namespace std;

int MCD( int m, int n )
{
	int r;
	do{
		r= m % n;
		if(r != 0)
	{
		m = n;
		n = r;
	}
} while (r != 0);
return n ;
	
}
int main (){
	int a, b;
	
	cout<<"inserisci i due valori";
	cin>> a;
	cin>> b;
	
	cout<< MCD (a,b);
}
