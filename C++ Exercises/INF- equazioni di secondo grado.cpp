#include <iostream>
#include <cmath>

using namespace std;

float delta(float n1, float n2, float n3) {
  float D;
  D = pow(n2, 2) - (4 * n1 * n3);
  return D;
}

int main() {


  float n1, n2, n3, risultato1, risultato2;

  cout << "Inserisci i 3 coefficienti: " << endl;
  cin >> n1;
  cin >> n2;
  cin >> n3;

  cout << endl;
  cout << endl;

  risultato1 = (-n2 - sqrt(delta(n1, n2, n3))) / (2 * n1);
  risultato2 = (-n2 + sqrt(delta(n1, n2, n3))) / (2 * n1);
  cout << endl;
  cout << "SOLUZIONI: " << endl;
  cout << "x1 = " << risultato1 << endl;
  cout << "x2 = " << risultato2;

}
