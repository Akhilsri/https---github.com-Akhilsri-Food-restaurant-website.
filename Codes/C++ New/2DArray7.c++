#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter rows and column of vector : ";
    int n,m;
    cin>>n>>m;
    vector<vector<int>> vec(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            if(vec[i][j]==1){
                cout<<"Required Row : "<< i;
                
                 break;
            }
        
        }
        
    }
}
