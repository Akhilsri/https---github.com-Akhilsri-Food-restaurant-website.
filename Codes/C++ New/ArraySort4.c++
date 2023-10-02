#include<iostream>
#include<vector>
using namespace std;
void sortEvenAndOdd(vector<int> &v){
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while(left_ptr<right_ptr){
    if(v[left_ptr]%2!=0 && v[right_ptr]%2==0){
        int n=v[left_ptr];
        v[left_ptr]=v[right_ptr];
        v[right_ptr--]=n;
        left_ptr++;
    }
    if(v[left_ptr]%2!=0 && v[right_ptr]!=0){
        right_ptr--;
    }
    if(v[left_ptr]%2==0 && v[right_ptr]==0){
        left_ptr++;
    }
    if(v[left_ptr]%2==0 && v[right_ptr]!=0){
        left_ptr++;
    }}
    

}
int main(){
    vector<int> ve;
    for(int i=0;i<6;i++){
        int n;
        cin>>n;
        ve.push_back(n);
    }
    sortEvenAndOdd(ve);
    for(int i=0;i<6;i++){
        cout<<ve[i];
    }

}