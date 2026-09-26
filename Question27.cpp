#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> arr = {{1,2,3},{5,73,6},{2,4,7}};
    for(int i=0;i<arr[0].size();i++){
        for(int ele : arr[i]) cout<<ele<<" ";
        cout<<endl;
    }
}
