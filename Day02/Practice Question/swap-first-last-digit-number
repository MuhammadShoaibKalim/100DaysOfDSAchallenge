#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num, originalNum;
    int numOfDigits = 0;
    int firstDigit, lastDigit, swappedNumber;

    cout << "Enter a positive integer: ";
    cin >> num;

    // Handle negative numbers (optional)
    if (num < 0) {
        cout << "Error: Please enter a positive integer." << endl;
        return 1; // Indicate an error
    }

    // Special case: single-digit number
    if (num < 10) {
        cout << "Original number: " << num << endl;
        cout << "Swapped number: " << num << endl;
        return 0;
    }

    // Find the number of digits
    originalNum = num;
    while (originalNum > 0) {
        originalNum /= 10;
        numOfDigits++;
    }

    // Extract the first and last digits
    firstDigit = num / (int)pow(10, numOfDigits - 1);
    lastDigit = num % 10;

    // Remove the first digit and last digit from the original number
    int middlePart = (num % (int)pow(10, numOfDigits - 1)) / 10;

    // Construct the swapped number
    swappedNumber = lastDigit * (int)pow(10, numOfDigits - 1); // Place last digit at the first position
    swappedNumber += middlePart * 10; // Add the middle part back
    swappedNumber += firstDigit; // Place the first digit at the last position

    // Print the results
    cout << "Original number: " << num << endl;
    cout << "Swapped number: " << swappedNumber << endl;

    return 0;
}
