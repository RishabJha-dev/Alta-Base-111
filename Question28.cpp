#include<iostream>
using namespace std;
int main(){
    int n,g=INT_MIN;
    cout<<"enter length of array :";
    cin>>n;
    int arr[n];
    for (int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    for (int i=0 ; i<=n ; i++){
       if (g >= arr[i]){
        continue;
       }
       else g=arr[i];
    }
    cout<<g;
}
