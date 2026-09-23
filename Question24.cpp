#include <iostream>
using namespace std;

void checkEvenOdd() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << num << " is Even." << endl;
    } else {
        cout << num << " is Odd." << endl;
    }
}

void checkPositiveNegative() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0) {
        cout << num << " is Positive." << endl;
    } else if (num < 0) {
        cout << num << " is Negative." << endl;
    } else {
        cout << "The number is Zero." << endl;
    }
}

void calculateFactorial() {
    int n;
    long long fact = 1;
    cout << "Enter a non-negative integer: ";
    cin >> n;
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return;
    }
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << "Factorial of " << n << " is " << fact << endl;
}

int main() {
    int choice;
    do {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Check Even or Odd" << endl;
        cout << "2. Check Positive or Negative" << endl;
        cout << "3. Calculate Factorial" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                checkEvenOdd();
                break;
            case 2:
                checkPositiveNegative();
                break;
            case 3:
                calculateFactorial();
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
