#include<iostream>
#include<vector>
using namespace std;

void sortZeroesAndOnes(vector<int> &v) {
    int left_ptr = 0;
    int right_ptr = v.size() - 1;
    
    while (left_ptr < right_ptr) {
        if (v[left_ptr] == 0 && left_ptr < right_ptr) {
            left_ptr++;
        }
        
        if (v[right_ptr] == 1 && left_ptr < right_ptr) {
            right_ptr--;
        }
        
        if (left_ptr < right_ptr) {
            v[left_ptr++] = 0;
            v[right_ptr--] = 1;
        }
    }
}

int main() {
    vector<int> ve;
    
    // Input 8 values into the vector
    for (int i = 0; i < 8; i++) {
        int n;
        cin >> n;
        ve.push_back(n);
    }
    
    sortZeroesAndOnes(ve);

    for (int i = 0; i < 8; i++) {
        cout << ve[i];
    }

    return 0;
}
