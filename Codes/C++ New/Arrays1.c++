#include<iostream>
using namespace std;
int main(){
    //for each loop
   int arr[5];
   for(int &elem:arr){
    cin>>elem;
   }
   for(int elem:arr){
    cout<<elem;
   }
   }