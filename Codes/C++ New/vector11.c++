#include<iostream>
#include<vector>
int largestElementIndex(int array[], int size){
    int max=INT16_MIN;
    int index;
    for(int i=1;i<size;i++){
        if(array[i]>max){
            max=array[i];
            index=i;
        }
    }
return index;
}

using namespace std;
int main(){
    int arr[]={2,3,5,7,6,1};
    int indexLargest = largestElementIndex(arr,6);
    arr[indexLargest]=-1;
    int indexofSecLar = largestElementIndex(arr,6);
    cout<<arr[indexofSecLar];

}
