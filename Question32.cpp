#include<iostream>
using namespace std;
int main(){
    int n,m=INT_MIN,sm=INT_MIN;
    cout<<"enter length of array :";
    cin>>n;
    int arr[n];
    for (int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    for (int i=0; i<n ; i++){
         if (arr[i] >= m){
            m = arr[i];
         }
    }
    for (int i=0; i<n ; i++){
         if (arr[i] < m && arr[i] > sm){
            sm = arr[i];
         }
    }
    cout<<sm;  
}
