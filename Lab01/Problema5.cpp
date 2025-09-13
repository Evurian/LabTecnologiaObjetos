#include <iostream>
using namespace std;

double cargo(int horas){
    if(horas == 1){
        return 3;
    }

    if(horas > 1 & horas < 20){
        return 3 + (horas-1)*0.5;
    } 

    if(horas >= 20 & horas <= 24){
        return 12;
    }

    return 0;

}

int main(){

    int n ;
    cout << "Ingrese numero de horas ";
    cin >> n;
    double total = cargo(n);
    cout << "El cargo total es: " << total << endl;
    return 0;

}