#include <iostream>
using namespace std;
int main(){
    double ab;
    int wa;
    cin >> ab >> wa;
    if (wa > 0 && wa % 100 == 0 && 
        ab >= wa + 2) {
        cout << "Transaction Valid: true" << endl;
        double rb = ab - wa - 2;
        cout << "Remaining Balance: " << rb << endl;
    } 
    else {
        cout << "Transaction Valid: false" << endl;
    }
}
