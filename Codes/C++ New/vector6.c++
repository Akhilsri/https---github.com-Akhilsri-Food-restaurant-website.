#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={2,3,5,6,7};
    cout<<"Enter x : ";
    int x;
    cin>>x;
    int count=0;
    for(int elem:arr){
        if(elem>x){
            count++;
        }
    }
    cout<<count;
}
