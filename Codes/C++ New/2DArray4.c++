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
        }
    }
    cout<<endl;
    for(int i=0;i<=2;i++){
        for(int j=2;j>=0;j--){
            cout<<arr[j][i];
        }cout<<endl;
    }
}