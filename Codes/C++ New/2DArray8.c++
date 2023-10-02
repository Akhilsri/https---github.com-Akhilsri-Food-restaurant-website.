#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter rows and column of matrix:";
    int n,m;
    cin>>n>>m;
    vector<vector<int>> vec(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    int top=0,bottom=n,left=0,right=m;
    int direction = 0;
    while(){
        if(direction==0){
            for(int col=left;col<right;col++){
                cout<<vec[top][col];
                top--;
            }
        }
        else if(direction==1){
            for(int row=top;row<=bottom;row++){
                cout<<vec[]
            }
        }
    }

}