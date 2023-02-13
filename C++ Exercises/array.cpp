#include <iostream>
using namespace std;

int Max(int n, int v[]) {

    int m = v[0];

    for (int i = 1; i < n; i++)
        if (v[i] > m)
            m = v[i];

    return m;
}

int Min(int n, int v[]) {

    int m = v[0];

    for (int i = 1; i < n; i++)
        if (v[i] < m)
            m = v[i];
}

int somma(int n, int v[]) {

    int s = v[0]

    for (int i = 1; i < n; i++)
        s += v[i];

    return s;
}

void scambia(int a, int b) {

    int c = a;
    a = b;
    b = c;
}

void inserimento(int v[], int n) {

    for (int i = 0; i < n; i++) {
        cout << "inserisci il " << (i + 1) << "° numero: ";
        cin >> v[i];
    }
}
int main()
{
    int n1, n2, n3, n4;

    do {

        cout << "Metti la quantita di numeri da inserire: ";
        cin >> n1;
    } while (n1 < 0);
    

    int v1[n1];
    cout << "Inserisci i numeri del primo vettore";
    inserimento(v1, n1);

    cout << "Metti la quantita di numeri da inserire: ";
    cin >> n2;

    int v2[n2];
    cout << "Inserisci i numeri del primo vettore";
    inserimento(v2, n2);

    cout << "Metti la quantita di numeri da inserire: ";
    cin >> n3;

    int v3[n3];
    cout << "\nInserisci i numeri del terzo vettore";
    inserimento(v3, n3);

    cout << "\nMetti la quantita di numeri da inserire: ";
    cin >> n4;

    int v4[n4];
    cout << "Inserisci i numeri nel quarto vettore";
    inserimento(v4, n4);


    
}
