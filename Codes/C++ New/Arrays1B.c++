#include<iostream>
using namespace std;
int main(){
    int even=0,odd=0;
    int arr[]={23,56,88,49,29,90,44};
    for(int ele:arr){
        if(ele%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"Even"<<" "<<even<<endl;
    cout<<"Odd"<<" "<<odd<<endl;
return 0;
}