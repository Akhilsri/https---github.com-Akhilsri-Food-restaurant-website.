#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    cout<<"Enter x : ";
    int x;
    cin>>x;
    for(int i=5;i>0;i--){
        if(v[i]==x){
            cout<<i;
            break;
        }
    }
}