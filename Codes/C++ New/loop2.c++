#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        if(i==1||i==4){
            for(int j=1;j<=6;j++){
                cout<<"*";
            }
            cout<<endl;

        }
        if(i==2||i==3){
            for(int k=1;k<=6;k++){
                if(k>1 && k<6){
                    cout<<" ";
                }
                else{
                    cout<<"*";
                }
            }
            cout<<endl;
        }
    }
}