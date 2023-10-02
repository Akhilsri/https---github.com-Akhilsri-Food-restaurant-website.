#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Size :"<<v.size();
    cout<<"Capacity :"<<v.capacity();

    v.push_back(1);
    cout<<"Size :"<<v.size();
    cout<<"Capacity :"<<v.capacity();

    v.push_back(2);
    cout<<"Size :"<<v.size();
    cout<<"Capacity :"<<v.capacity();

    v.resize(5);
    cout<<"Size :"<<v.size();
    cout<<"Capacity :"<<v.capacity();
    
    return 0;
}