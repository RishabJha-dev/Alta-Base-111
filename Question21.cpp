#include<iostream>
using namespace std;
float flo(float a,float b){
    return a+b;
}
int integer(int a,int b){
    return a+b;
}
int main(){
    int x,y;
    cout<<"enter integers :";
    cin>>x>>y;
    float c,d;
    cout<<"enter float :";
    cin>>c>>d;
    cout<<integer(x,y)<<"\n";
    cout<<flo(c,d);
}
