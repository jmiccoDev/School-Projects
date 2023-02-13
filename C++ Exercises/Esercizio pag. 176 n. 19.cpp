#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double perimetroTriangolo(double distance1, double distance2, double distance3) {
      return distance1 + distance2 + distance3;

}

int main() {
	
      double x1, y1, x2, y2, x3, y3;

      cout << "Immettere le coordinate del primo punto: ";
      cin >> x1;
      cin >> y1;
      cout << endl;
      
      cout << "Immettere le coordinate del secondo punto: ";
      cin >> x2;
      cin >> y2;
      cout << endl;
      
      cout << "Inserisci le coordinate del terzo punto: ";
      cin >> x3;
      cin >> y3;

      double dist1 = distance(x1, y1, x2, y2);
      double dist2 = distance(x2, y2, x3, y3);
      double dist3 = distance(x3, y3, x1, y1);

      cout << endl;
      cout << "Perimetro Triangolo: " << perimetroTriangolo(dist1, dist2, dist3);
      
}
