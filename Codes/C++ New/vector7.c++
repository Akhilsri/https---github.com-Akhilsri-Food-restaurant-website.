#include<iostream>
using namespace std;
int main(){
    int arr[]={2,6,4,9,1,6,5,3};
    int evensum=0,oddsum=0,difference=0;
    for(int i=0;i<=6;i=i+2){
        evensum+=arr[i];
    }
    for(int i=1;i<=7;i=i+2){
        oddsum+=arr[i];
    }
    difference = evensum - oddsum;
    cout<< difference;
}