//Data una frase inserita dall'utente, calcolare quante volte appare la a minuscola
#include <iostream>

using namespace std;
int main()
{
	int n=0;
	string s;
	
	getline(cin,s);
	
	for(int i=0; i <s.size(); i++)
	{
		if(s[i]=='a')
		n++;
	}
	cout << "ci sono" << n << " a minuscole" << endl;
}
