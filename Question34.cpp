#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={10,20,30,40,50,60,70};
    int n = arr.size();
    int i=0,j=n-1;
    while (i<j){
        int temp = 0;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for (int ele : arr){
        cout<<ele<<" ";
    }
}
