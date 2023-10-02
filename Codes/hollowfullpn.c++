#include <iostream>
using namespace std;

int main() {
  int number, i, j;
  cin >> number;
  for (i = 1; i <= number; i++)
  {
    for (j = i; j < number; j++)
    {
      cout << " ";
    }
    for (j=1; j <= i; j++)
    {
      if (j==1 || i==number){
      cout << j << " ";
      } else {
      cout << " " ;
    }
    }
    for (j=1; j < number -1; j++)
    {
      if (j == i-1 && j < number-1) {
      cout << j+1;
      } else {
      cout << " " ;
      }
    }
    cout << endl;
  }
  return 0;
}