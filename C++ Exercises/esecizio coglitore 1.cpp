#include <iostream>

using namespace std;

void binario(int x){
    if(x != 0){
        binario(x / 2);
        cout << x % 2;
    }
    else{
        cout << "";
    }
}


int main()
{
    int n;
    cout << "Inserisci numero in decimale: ";
    cin >> n;

    cout << endl;
    cout << "Numero binario: ";
    binario(n);
    
    return 0;
}

