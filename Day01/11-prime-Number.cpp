#include <iostream>
using namespace std;

int main() {
    // Check if a number is prime.
    int n;
    cout << "Enter the number to check if it's prime: ";
    cin >> n;

    bool isPrime = true;

    if (n <= 1) {
        isPrime = false; // 0 and 1 are not prime numbers.
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = false;  //composite number 
                break;
            }
        }
    }

    if (isPrime) {
        cout << n << " is a prime number.";
    } else {
        cout << n << " is not a prime number.";
    }

    return 0;
}
