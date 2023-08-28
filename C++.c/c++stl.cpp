#include<bits/stdc++.h> //It includes all the header files from standard library
using namespace std; //It contains build in classes and declared functions
namespace akhil{
    int value=50;
    int getvalue(){
        return value*10;
    }
}
struct node{
    string str;
    int num;
    double doub;
    char x;

    node(str_,num_,doub_,x_){  // Creating self data type where we can store any data type
        str = str_;
        num=num_;
        doub=doub_;
        x=x_;
    }
}
int main(){
    double value = 10.0;
    cout<<value; //Gives output 10
    cout<<akhil::value; //Gives output 50
    cout<<akhil::getvalue();//Gives output 500

    node akhil = new node("striver",79,91.0,"");
}


