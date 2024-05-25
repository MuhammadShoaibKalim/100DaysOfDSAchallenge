#include <iostream>
#include <vector>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) 
    return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) 
        return false;  //not a prime number
    }
    return true;  //prime number
}

int main() {
    int limit;
    cout << "Enter the upper limit to list prime numbers: ";
    cin >> limit;

    vector<int> primes;

    // Find all prime numbers up to the limit
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }

    // Print the list of prime numbers
    cout << "Prime numbers till the " << limit << " are: ";
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}
