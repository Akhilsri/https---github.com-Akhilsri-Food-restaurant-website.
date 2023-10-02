#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,6,7,1};
    int pair = 0;
    cout<<"Enter target sum : ";
    int targetsum;
    cin>>targetsum ;
    for(int i=0;i<=4;i++){
        for(int j=i+1;j<=4;j++){
        if((arr[i]+arr[j])==targetsum){
            pair++;
        }
    }}
    cout<<pair;
}