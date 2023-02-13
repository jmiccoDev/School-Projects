#include <iostream>
#define DIM 60

using namespace std;


 void inserisci (int v []);
 float media (int v []);
 void stampalamedia (int v []);
 
 int main()
 {
 	int v [DIM];
 	inserisci(v);
 	media(v);
 	cout << "media" << endl;
 	cout << media << endl;
 }
 void inserisci (int v[]){
 	for (int i = 0; i < DIM; i++){
 		cout << "Inserire i dati["<< i <<"]";
 		cin  >> v[i];
	 }
 }
 float media (int v []){
 
 float media;
  
 int prec; int succ; int i;
 
 for (i = 0 ; i < DIM ; i++);
 {
 prec= v[i]-1;
 
 succ= v[i]+1;
 
 media= v[i]+ prec + succ / 3;
 
 v[i] = media;
 
 }
 return media;
}
