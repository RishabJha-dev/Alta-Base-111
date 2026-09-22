#include <iostream>
using namespace std;

void calculateStats(int num1, int num2, int &minimum, int &maximum, int &sum) {
    if (num1 < num2) {
        minimum = num1;
        maximum = num2;
    } else {
        minimum = num2;
        maximum = num1;
    }

    sum = num1 + num2;
}

int main() {
    int a = 15;
    int b = 42;

    int minResult, maxResult, sumResult;

    calculateStats(a, b, minResult, maxResult, sumResult);

    cout << "First Number: " << a << endl;
    cout << "Second Number: " << b << endl;
    cout << "Minimum: " << minResult << endl;
    cout << "Maximum: " << maxResult << endl;
    cout << "Sum: " << sumResult << endl;

    return 0;
}
