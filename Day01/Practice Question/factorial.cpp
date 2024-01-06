#include<iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter the value of number: ";
    cin >> number;

    if (number > 1) {
        for (int i = 1; i <= number; ++i) {
            cout << i << " ";
        }
    } else {
        cout << "The given number is not greater than 1.";
    }

    return 0;
}
