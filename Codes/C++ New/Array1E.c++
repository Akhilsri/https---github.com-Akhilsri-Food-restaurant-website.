#include<iostream>
using namespace std;
int main(){
    int a[]={5,6,10,4,9};
    int b[]={1,2,3,4,5};
    int small1=a[0];
    int small2=b[0];
    for(int i=1;i<=4;i++){
        if(small1>a[i]){
            small1=a[i];
        }
    }
    for(int i=1;i<=4;i++){
        if(small2>a[i]){
            small2=a[i];
        }
    }
    cout<<small1+small2;
}