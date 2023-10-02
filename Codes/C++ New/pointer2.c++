#include<iostream>
using namespace std;
int main(){
    int x=5,y=8,result;
    int *ptr1 = &x;
    int *ptr2 = &y;
    int *ptr3 = &result;
    *ptr3 = *ptr1 + *ptr2;
    cout<<*ptr3;
}