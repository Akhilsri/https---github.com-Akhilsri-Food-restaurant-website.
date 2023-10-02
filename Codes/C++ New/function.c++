#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int main(){
    int x,y;
    cin>>x;
    cin>>y;
    int z= add(x,y);
    cout<<z;
}