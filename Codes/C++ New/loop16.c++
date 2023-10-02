#include<iostream>
using namespace std;
int main(){
    int n,sum1=0,sum2=0;
    cout<<"Enter the value of n";
    cin>>n;
    if(n%2==0){
        for(int i=1;i<=(n-1);i=i+2){
            sum1+=i;
        }
        for(int j=2;j<=n;j=j+2){
            sum2+=j;
        }
        cout<<(sum1-sum2);
    }
    else{
        for(int i=1;i<=n;i=i+2){
            sum1+=i;
        }
        for(int j=2;j<=(n-1);j=j+2){
            sum2+=j;
        }
        cout<<(sum1-sum2);
    }

}