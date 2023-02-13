#include <iostream>

using namespace std;

int tempo_in_secondi(int h, int m, int s) {
  int secondi = 0;

  secondi += h * 60 * 60;

  secondi += m * 60;

  secondi += s * 1;

  return secondi;
}

int main() {
  int h1, m1, s1, h2, m2, s2;

  cout << "Digitare tempo in ore minuti e secondi: ";
  cin >> h1 >> m1 >> s1;
  cout << endl;

  cout << "Digitare il secondo tempo in ore minuti e secondi: ";
  cin >> h2 >> m2 >> s2;
  cout << endl;

  if (tempo_in_secondi(h1, m1, s1) > tempo_in_secondi(h2, m2, s2)) {
    cout << "Il primo orario e' maggiore del secondo";
  } else {
    cout << "Il secondo orario e' maggiore del primo";
  }

}
