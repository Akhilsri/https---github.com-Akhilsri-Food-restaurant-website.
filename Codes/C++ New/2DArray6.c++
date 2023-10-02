#include<iostream>
#include<vector>
using namespace std;
int maximumOnesRow(vector<vector<int>> &V){
    int maxOnes = INT16_MIN;
    int maxOnesRow = -1;
    int columns = V[0].size();

    for(int i=0;i<V.size();i++){
        for(int j=0;j<V[i].size();j++){
            if(V[i][j]==1){
                int numberOfOnes=columns-1;
                if(numberOfOnes>columns){
                    maxOnes=numberOfOnes;
                    maxOnesRow = i;
;                }
            }
            break;
        }
    }
    return maxOnesRow;
}
int main(){
    cout<<"Enter no. of rows and columns : "<<" ";
    int n,m;
    cin>>n>>m;
    vector<vector<int>> vec(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }

    int res=maximumOnesRow(vec);
    cout<<res;
}