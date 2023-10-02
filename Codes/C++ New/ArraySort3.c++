#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int> vNew;
    for(int i=0;i<6;i++){
        int n;
        cin>>n;
        v.push_back(n);
    }
   
    for(int elem:v){
        if(elem%2==0){
            vNew.push_back(elem);
        }
    }
    for(int elem:v){
        if(elem%2!=0){
            vNew.push_back(elem);
        }
    }
    for(int i=0;i<6;i++){
        cout<<vNew[i]<<" ";
    }
}