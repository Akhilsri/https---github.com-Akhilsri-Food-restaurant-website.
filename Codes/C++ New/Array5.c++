#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void square(vector<int> &v,vector<int> &vNew){
    for(int elem:v){
        int squareValue = elem * elem;
        vNew.push_back(squareValue);
    }
}
int main(){
    vector<int> v;
    vector<int> vNew;
    for(int i=0;i<5;i++){
        int n;
        cin>>n;
        v.push_back(n);
    }
    square(v,vNew);
    std::sort(vNew.begin(),vNew.end());

    for(int i=0;i<5;i++){
        cout<<vNew[i]<<" ";
    }
}
