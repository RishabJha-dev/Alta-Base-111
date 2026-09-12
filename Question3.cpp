#include <iostream>
using namespace std;

int main() {
    int input;
    cin >> input;
    bool flag = input;
    cout << boolalpha;
    cout << "Initial: " << flag << endl;
    flag = !flag;
    cout << "Toggled: " << flag << endl;
}
