#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={2,3,1,5,2,4,1};
    for(int i=0;i<=6;i++){
        for(int j=i+1;j<=6;j++){
            if(arr[i]==arr[j]){
                arr[i]=0;
                arr[j]=0;
            }
        }
    }
    for(int i=0;i<=6;i++){
        if(arr[i]>0){
            cout<<arr[i];
        }
    }
}
