#include <iostream>
using namespace std;

int main() {
    // Print even or odd numbers up to the given number
    cout << "Enter a number: ";
    int number;

    cin >> number;

    if (number % 2 == 0) {
        // If the number is even, print even numbers up to the number
        cout << "Even numbers up to " << number << ": ";
        for (int i = 2; i <= number; i += 2) {
            cout << i << " ";
        }
    } else {
        // If the number is odd, print odd numbers up to the number
        cout << "Odd numbers up to " << number << ": ";
        for (int i = 1; i <= number; i += 2) {
            cout << i << " ";
        }
    }

    cout << endl; 
    return 0;
}
