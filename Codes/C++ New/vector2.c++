#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    for(int i=0;i<5;i++){
        int elem;
        cin>>elem;
        v.push_back(elem);
    }
    for(int i=0;i<5;i++){
        cout<<v[i]<<endl;
    }

    for(int ell:v){
        cout<<ell;
    }
}