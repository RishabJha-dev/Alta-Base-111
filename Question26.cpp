#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    for(int i=0 ; i<sizeof(arr)/4 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   arr[3] = 9;
   for(int ele:arr) cout<<ele<<" ";
}
