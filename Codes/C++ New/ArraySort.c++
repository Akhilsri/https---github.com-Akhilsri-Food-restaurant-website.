#include<iostream>
// #include<vector>
// #include<algorithm>
using namespace std;
int main(){
    int zero=0,one=0;
    int arr[]={1,1,0,0,1,0,1,0};
    int arrNew[8];
    for(int i=0;i<8;i++){
        if(arr[i]==0){
            zero++;
        }
        if(arr[i]==1){
            one++;
        }
    }
    for(int i=0;i<zero;i++){
        arrNew[i]=0;
    }
    for(int i=zero;i<8;i++){
        arrNew[i]=1;
    }
    for(int i=0;i<8;i++){
        cout<<arrNew[i];
    }
    


    // for(int i=0;i<zero;i++){
    //     arrNew[i]=0;
    // }
    // for(int i=zero;i<8;i++){
    //     arrNew[i]=1;
    // }
    // for(int i=0;i<8;i++){
    //     cout<<arr[i];
    // }
    
}