#include<iostream>
using namespace std;
int main(){
    cout<<"Enter row and column of an array : ";
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }cout<<endl;
    }
    int max=arr[0][0];
    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    cout<<max;
}