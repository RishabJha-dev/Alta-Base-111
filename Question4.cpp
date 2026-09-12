#include <iostream>
using namespace std;
int main(){
    float ogPrice, discPer, taxPer;
    cin >> ogPrice >> discPer >> taxPer;
    float discAmt = ogPrice * (discPer / 100);
    float discPrice = ogPrice - discAmt;
    float taxAmt = discPrice * (taxPer / 100);
    float finalPrice = discPrice + taxAmt;
    cout << "Discounted Price: " << discPrice << endl;
    cout << "Final Price: " << finalPrice << endl;
}
