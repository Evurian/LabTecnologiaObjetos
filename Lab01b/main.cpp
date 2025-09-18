#include <iostream>
using namespace std;

int countChange(int money, int coins[], int size){

    if(money == 0){
        return 1;
    }
    if(money < 0 || size <= 0 )  {
        return 0;
    }
    return countChange(money - coins[size -1],coins ,size) - countChange(money, coins,size - 1) ;

}

int main(){
    int n;
    int coins[] = {1,2,5};
    int size = sizeof(coins)/sizeof(coins[0]);
    cout << "Ingrese dinero a contar: ";
    cin >> n;

    int formas = countChange(n, coins, size);
    cout << formas << endl;
    return 0;
}