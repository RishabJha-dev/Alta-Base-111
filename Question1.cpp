#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int years = N / 365;
    int rem_days = N % 365;

    int months = rem_days / 30;
    int days = rem_days % 30;

    cout << years << " years, " << months << " months, " << days << " days" << endl;

}
