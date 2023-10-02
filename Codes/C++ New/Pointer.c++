#include<iostream>
using namespace std;
int main(){
    int x = 10;
    x=15;
    int *ptr = &x;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr;
    }