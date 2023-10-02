#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        int k=i-1;
        for(int j=1;j<=4-k;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}