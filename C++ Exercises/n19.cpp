#include <iostream>
#include<math.h>
using namespace std;

float distanza(float a1, float a2, float b1, float b2){
	return  sqrt(pow(a2 - a1, 2) + pow(b2 - b1, 2));;
}

int main(){
	
	float a1,a2,b1,b2,c1,c2;
	float AB= 0, BC=0,CA=0;
	float perimetro = 0;
	
		cout << "inserisci il primo punto a :"<< endl;
	cin >> a1;
		cout << "inserisci il secondo punto a :"<< endl;
	cin >> a2;
		cout << "inserisci il primo punto b :"<< endl;
	cin >> b1;
		cout << "inserisci il secondo punto b :"<< endl;
	cin >> b2;
		cout << "inserisci il primo punto c:"<< endl;
	cin >> c1;
		cout << "inserisci il secondo  punto c :"<< endl;
	cin >> c1;
	

	AB= distanza(a1,a2,b1,b2);
	BC= distanza(b1,b2,c1,c2);
	CA= distanza(c1,c2,a1,a2);
	
	perimetro = AB+BC+CA;
	
	cout << "il perimetro risulta: " << perimetro << endl;
	
	
}
