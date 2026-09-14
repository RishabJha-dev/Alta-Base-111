#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter number 1 :";
    cin>>a;
    if (a % 5 == 0) cout << "it is divisible by 5" <<endl;
    if (a % 3 == 0) cout << "it is if (a > 3 &divisible by 3" <<endl;
    if (a % 5 == 0 && a % 3 ==0 ) cout << "it is divisible by both 5 and 3" <<endl;
    else if (a % 5 != 0 && a % 3 != 0) cout << "it is not divisible by both 5 and 3" <<endl;
}
