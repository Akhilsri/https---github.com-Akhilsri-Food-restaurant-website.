#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the rows and columns : ";
    int n, m;
    cin>>n>>m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < m; j++)
        {
            if(arr[i][j]==0){
                int k=i;
                for(int l=0;l<=2;l++){
                    arr[k][l]=0;
                }
                int m=j;
                for(int n=0;n<=2;n++){
                    arr[n][m]=0;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < m; j++)
        {
            cout << arr[i][j];
        }
    }
    
    
}