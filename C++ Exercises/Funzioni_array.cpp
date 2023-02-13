#include<iostream>

using namespace std;

void Inserimento(int n, int array[]) {
    cout << "Inserire i valori dell'array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Inserire " << i << endl;
        cin >> array[i];
    }

}

int NumeriPari(int n, int array[]) {
    int pari;
    pari=0;
    for (int i = 0; i<n; i++) {
        if (array[i] % 2 == 0) {
            pari++;
        }
    }
    return pari;
}

int NumeriDispari(int n, int array[]) {
    int dispari;
    dispari=0;
    for (int i = 0; i<n; i++) {
        if (array[i] % 2 != 0) {
            dispari++;
        }
    }
    return dispari;
}

int Somma(int n, int array[]) {
    int ris;
    ris=0;
    for (int i = 0; i<n; i++) {
        ris += array[i];
    }
    return ris;   
}

int NumeroMassimo(int n, int array[]) {
    int massimo;
    massimo=0;
    for(int i=0; i<n; i++){
    	if (massimo < array[i]) {
        massimo = array[i];
    }
	}
    return massimo;
}

void scambia(int &a, int &b){
	int scambio;
	scambio=b;
	b=a;
	a=scambio;
}

int main() {
    int n;
    int a;
    int b;
    cout << "Inserisci la lunghezza dell'array: " << endl;
    cin >> n;

    int array[n];

    Inserimento(n, array);

    cout << "Ci sono: " << NumeriPari(n, array) << " numeri pari " << endl;
    cout << "Ci sono: " << NumeriDispari(n, array) << " numeri dispari " << endl;
    cout << "La somma dei valori dell'array equivale a: " << Somma(n, array) << endl;
    cout << "Il valore piu' alto e' " << NumeroMassimo(n, array) << endl;
    
    cout << "---------------------------------" << endl;
    cout << "Inserisci a e b: " << endl;
    cin >> a;
    cin >> b;
    
    scambia(a,b);
    cout << "Questo e' a: " << a << endl;
    cout << "Questo e' b: " << b << endl;
    
}
