#include <iostream>
using namespace std;
int main ()
{
    int n,count=0;
    cin>>n;
    while(n--){
        int t,count1=0;
        for(int i=0;i<3;i++){
            cin>>t;
            if(t)
            count1++;
        }
        if(count1>=2)
        count++;
    }
    cout<<count;
    
}