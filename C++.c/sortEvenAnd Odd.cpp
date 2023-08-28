#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    vector<int> v(10);
    int size=10;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            for(int j=0;j<size;j++){
                v[j]=arr[i];
            }
        }
        else{
            for(int k=0;k<size;k++){
            if(arr[k]%2!=0){
                v[k]=arr[k];
            }}
        }
    }
    for (int l=0;l<size;l++){
        cout<<v[l];
    }
}