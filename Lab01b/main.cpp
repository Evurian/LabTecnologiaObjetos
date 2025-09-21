#include <iostream>
#include <vector>
using namespace std;

void printChange(int money, int coins[], int size, vector<int>& current, int& total) {
    if (money == 0) {
        total++;
        cout << "Forma " << total << ": ";
        for (int c : current) cout << c << " ";
        cout << endl;
        return;
    }
    if (money < 0 || size <= 0) {
        return;
    }

    current.push_back(coins[size - 1]);
    printChange(money - coins[size - 1], coins, size, current, total);
    current.pop_back();

    printChange(money, coins, size - 1, current, total);


}

int countChange(int money, int coins[], int size){

    if(money == 0){
        return 1;
    }
    if(money < 0 || size <= 0 )  {
        return 0;
    }
    return countChange(money - coins[size -1],coins ,size) + countChange(money, coins,size - 1) ;

}

int main(){
    int n;
    int coins[] = {1,2,5};
    int size = sizeof(coins)/sizeof(coins[0]);
    cout << "Ingrese dinero a contar: ";
    cin >> n;

    int formas = countChange(n, coins, size);
    cout << formas << endl;

    vector<int> current;
    int total = 0;
    printChange(n, coins, size, current, total);
    return 0;
}