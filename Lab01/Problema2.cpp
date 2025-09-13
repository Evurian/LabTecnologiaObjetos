#include <iostream>
using namespace std;

int main(){
    int a[10];
    for(int i = 0;i < 10;i++){
        int n =0;
        cout << "Ingrese un numero: ";
        cin >> n;
        if(i==0 || n > a[i - 1]){
            a[i] = n;
        } else {
            cout <<"\nEl numero debe ser mayor al anterior"<< endl;
            i--;
        }
    }
   
    cout << "Los números ingresados son: ";
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
   
    return 0;
}
