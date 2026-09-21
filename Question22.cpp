#include <iostream>
using namespace std;
void addTenByValue(int num) {
    num = num + 10;
    cout << "Inside addTenByValue: " << num << endl;
}
void addTenByReference(int &num) {
    num = num + 10;
    cout << "Inside addTenByReference: " << num << endl;
}

int main() {
    int a = 5;
    cout << "Starting value of a: " << a << endl << endl;
    cout << "Calling addTenByValue..." << endl;
    addTenByValue(a);
    cout << "Value of a in main: " << a << " (unchanged)" << endl << endl;
    cout << "Calling addTenByReference..." << endl;
    addTenByReference(a);
    cout << "Value of a in main: " << a << " (changed)" << endl;
    return 0;
}
