#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of rows";
    int r,c;
    cin>>r;
    cout<<"Enter the number of columns";
    cin>>c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}