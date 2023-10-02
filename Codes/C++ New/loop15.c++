#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    while(n>0){
        int c=n%10;
        cout<<c;
        n/=10;
    }

}