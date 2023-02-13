#include <iostream>
using namespace std;

void scambia(int &a, int &b)
{
	int temp=b;
	b=a;
	a=temp;
}

int main()
{
	int A=10;
	int B=100;
	
	scambia(A,B);
	
	cout<<A<<" "<<B;
}
