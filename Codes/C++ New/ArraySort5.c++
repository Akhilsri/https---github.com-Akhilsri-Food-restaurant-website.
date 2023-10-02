#include<iostream>
using namespace std;
int main(){
    
    int arr[]={5,4,1,2,3};
    for(int i=0;i<5;i++){
        int sum=0;
        for(int j=0;j<=i;j++){
            
            sum+=arr[j];
            
        }
        cout<<sum<<" ";
    }
    return 0;
}