#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,6,2,5,5,1};
    for(int i=0;i<6;i++){
        int sum=0,n=0;
        int sum2=0,m=0;
        for(int j=0;j<=i;j++){
            sum+=arr[j];n++;}
            for(int k=i+1;k<7;k++){
                sum2+=arr[k];m++;
            }
            if(sum==sum2){
                for(int a=0;a<n;a++){
                    cout<<arr[a]<<" ";
                }
                cout<<endl;
                for(int a=n;a<7;a++){
                    cout<<arr[a]<<" ";
                }
            }
        
    }
}
