#include <iostream>

#include <cmath>

using namespace std;

int main(){
    int T, v, t;
    cout << "Digitare la Temperatura: ";
    cin >> T;
    cout << "Digitare la velocita' in miglia orarie: ";
    cin >> v;
    
    if(v > 5){
        t = 33 + (0.45 + 0.29 * sqrt(v) - 0.02 * v) * (T - 33);
        T = t;
        cout << "La temperatura percepita a' " << floor(T) << " °C";
    }
    else{
        cout << "La temperatura percepita a' " << floor(T) << " °C";
    }
    
    
}

