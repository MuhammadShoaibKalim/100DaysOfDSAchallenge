//Check a given value is prime between a number.
#include<iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter the range (start and end): ";
    cin >> start >> end;

    cout << "Prime numbers in the range " << start << " to " << end << " are:" << endl;

    for (int i = start; i <= end; i++) {
            if (i <= 1)
                      {
                        continue;
                      } 

        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
