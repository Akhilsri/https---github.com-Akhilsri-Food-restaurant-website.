#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        if(i==1||i==4){
            for(int j=1;j<=6;j++){
                cout<<j;
            }
        }
        if(i==2||i==3){
            for(int j=1;j<=6;j++){
                if(j>1 && j<6){
                    cout<<" ";
                }else{
                    cout<<j;
                }
            }
        }
        cout<<endl;
    }
}