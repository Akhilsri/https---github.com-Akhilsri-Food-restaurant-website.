#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int rows,columns,i,j;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>columns;
     i=1;
     while( i<=rows){
            j=1;
    while(j<=columns){
        cout<<"*";
        j++;
    }
    cout<<"\n";
     i++;
}
getch();
    return 0;
}