#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    cout<<"Enter k : ";
    int k;
    cin>>k;
    k=k%n;
    int arrNew[5];
    int j=0;
    for(int i=n-k;i<n;i++){
        arrNew[j++]=arr[i];
    }
    for(int i=0;i<=k;i++){
        arrNew[j++]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arrNew[i]<<" ";
    }
    cout<<endl;
}