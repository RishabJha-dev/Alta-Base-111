#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {2,3,5,2,73,1,5,9,5};
    int n = arr.size();
    int max=INT_MIN;
    for (int i=0;i<n-1;i++){
        int d = arr[i] + arr[i+1];
        if (max<d) max = d;
    }
    cout<<max;
}
