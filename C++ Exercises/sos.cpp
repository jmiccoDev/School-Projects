#include<iostream>
#include<cmath>
using namespace std;

double Calcolo(double punto1[], double punto2[]){
	double risposta;
	risposta = sqrt(pow(punto1[2]-punto1[1], 2.0)+pow(punto2[2]-punto2[1], 2.0));
	return risposta; 
}

double Perimetro(double AB, double BC,double CA){

}

int main(){
	
	double A[2];
	double B[2];
	double C[2];
	double AB;
	double BC;
	double CA;
	double perimetro;
	
	cout << "Inserisci le cordinate del primo punto" << endl;
	cin >> A[1];
	cin >> A[2];
	cout << "Inserisci le cordinate del secondo punto" << endl;
	cin >> B[1];
	cin >> B[2];
	cout << "Inserisci le cordinate del terzo punto" << endl;
	cin >> C[1];
	cin >> C[2];
	
	cout << "La distanza tra A e B equivale a: " << Calcolo(A, B) << endl;
	cout << "--------------------------------" << endl;
	
	AB = Calcolo(A,B);
	BC = Calcolo(B,C);
	CA = Calcolo(C,A);
	perimetro = AB+BC+CA;
	
	cout << "Il perimetro del triangolo equivale a: " << perimetro;
	
}
