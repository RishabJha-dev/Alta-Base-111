#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int d = 3;
    int n = arr.size();
    d = d % n;
    vector<int> temp(d);
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }  
    return 0;
}
