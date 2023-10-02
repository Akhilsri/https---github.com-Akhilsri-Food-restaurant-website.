#include<iostream>
using namespace std;
int main(){
    int n,sum=0,c;
    cout<<"Enter a number"<<endl;
    cin>>n;
    while(n>0){
        c=n%10;
        sum+=c;
        n/=10;
    }
    cout<<sum;
}