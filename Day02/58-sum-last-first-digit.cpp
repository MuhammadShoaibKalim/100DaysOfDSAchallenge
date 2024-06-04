#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num;
    int firstDigit, lastDigit;
    int sum=0;

    cout << "Enter a positive integer: ";
    cin >> num;

     lastDigit = num % 10;
    // Find the number of digits
    firstDigit = num;

    while (firstDigit > 10) {
        firstDigit /= 10;
        
    }
        
         sum = firstDigit + lastDigit ;

    // Print the results
    cout << "Original number: " << num << endl;
    cout << "The sum of first and last digit of number: " << sum << endl;

    return 0;
}
