#include <iostream>
#include <cstdlib>  
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int a[6] = {};
    for(int i = 0; i < 20000; i++){
        int lanzamiento = rand() % 6;
        a[lanzamiento]++;
       
    }
   
    cout << "Resultados\n" ;
    for(int i = 0; i < 6;i++){
        cout << "cara" << i + 1 << ": " << a[i] << " veces\n";
    }
   
    return 0;
}

