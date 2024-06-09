#include <iostream>
using namespace std;

// Function to check if a number is perfect: if sum of proper divisor is equal to the number
//then it will be perfect number.

bool isPerfect(int num) {
    int sum = 0;

    // Find the divisors and sum them up
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    
    return sum == num;
}

int main() {
    int startRange, endRange;


    cout << "Enter the start of the range: ";
    cin >> startRange;
    cout << "Enter the end of the range: ";
    cin >> endRange;


    cout << "Perfect numbers between " << startRange << " and " << endRange << " are: ";
    bool found = false; 

    for (int num = startRange; num <= endRange; num++) {
        if (isPerfect(num)) {
            cout << num << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "None";
    }

    cout << endl;
    return 0;
}
