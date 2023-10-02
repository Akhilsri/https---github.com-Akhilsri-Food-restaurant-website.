#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"Enter the elements in the array";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=1;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int slargest=arr[0];
    for(int i=0;i<10;i++){
        if(slargest>arr[i]){
            if(slargest!=max){
                slargest=arr[i];
            }
        }
    }
    cout<<;
}