#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (a>b){
        if (a>c){
             cout<<"the largest number is :"<<a<<endl;
        }
    }
    else if (b>c){
        if (b>a){
             cout<<"the largest number is :"<<b<<endl;
        }
    }

    else if (c>a){
        if (c>b){
             cout<<"the largest number is :"<<c<<endl;
        }
    }
}
