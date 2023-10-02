#include<iostream>
using namespace std;
int main(){
    int count1=0,count2=0;
    int arr[]={1,6,5,7,10,8,9};
    for(int i=1;i<=5;i++){
        int a = arr[i];
        for(int j=0;j<i;j++){
            if(arr[j]<a){
                count1++;
            }}
            for(int k=i+1;k<=6;k++){
                if(arr[k]>a){
                    count2++;
                }
            }
            if(count1==i && count2==(6-i)){
                cout<<a;
            }
        }
    }