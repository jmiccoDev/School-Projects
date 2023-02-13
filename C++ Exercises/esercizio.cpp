#include <iostream>
using namespace std;

int main()
{
    int base;
    int altezza;
    int area;
    
    cout<<"-----------------------------------"<<endl;
    cout<<"Inserisci la base: "<<endl;
    cin>>base;
    cout<<"Inserisci l'altezza: "<<endl;
    cin>>altezza;
    
    area= base*altezza/2;
    cout<<"L'area del triangolo e': "<<endl;
    cout<<area<<endl;
    cout<<"-----------------------------------"<<endl;
    
    return 0;
}

