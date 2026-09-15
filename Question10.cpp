#include <iostream>
using namespace std;
int main() {
    int d, m, y;
    cin >> d >> m >> y;
    if (m < 1 || m > 12) {
        cout << "INVALID DATE (Invalid month)" << endl;
    } else {
        int maxD = 31;
        if (m == 4 || m == 6 || m == 9 || m == 11) {
            maxD = 30;
        } 
        else if (m == 2) {
            if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
                maxD = 29;
            } else {
                maxD = 28;
            }
        }
        if (d < 1 || d > maxD) {
            cout << "INVALID DATE (Invalid day)" << endl;
        } else {
            cout << "VALID DATE" << endl;
        }
    }
}
