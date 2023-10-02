#include<iostream>
using namespace std;
int main(){
    int a,b,c=1;
    cout<<"Enter base";
    cin>>a;
    cout<<"Enter power";
    cin>>b;
    for(int i=1;i<=b;i++){
        c=a*c;
    }
    cout<<c;
}