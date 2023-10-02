#include<iostream>
using namespace std;
int main(){
    int arr[]={5,1,2,3,4,5,7,8,8,4,9,10};
    int sum=0,sum2=0;
    cout<<"Enter l : ";
    int l;
    cin>>l;
    cout<<"Enter r : ";
    int r;
    cin>>r;
    for(int i=0;i<r;i++){
        sum+=arr[i];
    }
    for(int i=0;i<(l-1);i++){
        sum2+=arr[i];
    }
    cout<<"Required sum : "<<(sum-sum2);
}