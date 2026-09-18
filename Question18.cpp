#include <iostream>
using namespace std;
int main(){
    int c=0;
    while (true){
        int x;
        cin>>x;
        if (x>0){
            c += x;
        }
        else break;
    }
    cout<<c;
}
