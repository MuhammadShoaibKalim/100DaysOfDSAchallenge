
/* A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself. In other words,
 a prime number is a number that is only divisible by 1 and itself without leaving a remainder.


For example:

2 is a prime number because it is only divisible by 1 and 2.
3 is a prime number because it is only divisible by 1 and 3.
7 is a prime number because it is only divisible by 1 and 7.
On the other hand:

4 is not a prime number because it is divisible by 1, 2, and 4.
6 is not a prime number because it is divisible by 1, 2, 3, and 6.
*/

#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) {
        return false;   
    }
    for (int i = 2; i<n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
     
    return 0;
}




/*
#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) {
        return false;   
    }
    for (int i = 2; i<n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
     
    return 0;
}
*/
