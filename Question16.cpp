#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev=0,rev2=n;
    while (n > 0){
        rev *= 10;
        rev += n%10;
        n /= 10;
    }
    if (rev == rev2) cout<<"Palindrome";
    else cout<<"not Palindrome";
}
