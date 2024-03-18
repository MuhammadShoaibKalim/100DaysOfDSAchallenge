#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;   
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int countPrime(int count) {
    int primeCount = 0;
    for (int i = 2; i <= count; i++) {
        if (isPrime(i)) {
            primeCount++;
        }
    }
    return primeCount;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isPrime(num)) {
        cout << " The " << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    cout << "The count of prime numbers up to " << num << " is: " << countPrime(num) << endl;
     
    return 0;
}
