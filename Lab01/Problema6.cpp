#include <iostream>
using namespace std;

int segTotales(int h, int m, int s){    

    return (s + m*60 + h*3600);
}
int main(){
    int horas, minutos, seg;
    cout << "Ingrese numero de horas" << endl;
    cin >> horas;

    cout << "Ingrese numero de minutos" << endl;
    cin >> minutos;

    cout << "Ingrese numero de segundos" << endl;
    cin >> seg;

    int total = segTotales(horas,minutos,seg);

    cout << "El total de segundos es: " << total << endl;

}