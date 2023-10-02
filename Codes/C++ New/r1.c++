#include <iostream>

int main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Using a range-based for loop to iterate over rows
    for (const auto& row : arr) {
        // Using another range-based for loop to iterate over columns within the row
        for (int element : row) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
