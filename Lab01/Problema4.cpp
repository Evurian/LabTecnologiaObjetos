#include <iostream>
using namespace std;

int main(){
    double a,b,c, menor;
    cout << "Ingrese primer numero decimal: ";
    cin >> a;

    cout << "Ingrese segundo numero decimal: ";
    cin >> b;
    menor = a;
    if(b < menor){
        menor = b;
    }

    cout << "Ingrese tercer numero decimal: ";
    cin >> c;
    if(c < menor){
        menor = c;
    }
    cout << "El menor numero es: " << menor << endl ;
    return 0;

}