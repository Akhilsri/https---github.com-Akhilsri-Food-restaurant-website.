#include <iostream>
using namespace std;

float calculate_simple_interest(float principal, float rate, float time) {
    float interest = (principal * rate * time) / 100;
    return interest;
}

int main() {
    float principal, rate, time;

    // Read the input values
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the rate of interest (%): ";
    cin >> rate;
    cout << "Enter the time period (in years): ";
    cin >> time;

    // Calculate the simple interest
    float interest = calculate_simple_interest(principal, rate, time);

    // Print the result
    cout << "The interest you will receive is: " << interest << endl;

    return 0;
}