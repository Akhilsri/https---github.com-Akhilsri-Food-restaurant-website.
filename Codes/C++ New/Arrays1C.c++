#include<iostream>
using namespace std;
int main(){
    int arr[]={2,5,3,4,1};
     int small=arr[0];
    int great=arr[0];
    for(int i=1;i<=4;i++){
       
        if(small>arr[i]){
            small=arr[i];
        }

    }
    for(int i=1;i<=4;i++){
        
        if(great<arr[i]){
            great=arr[i];
        }
    }
    cout<<great+small;
}