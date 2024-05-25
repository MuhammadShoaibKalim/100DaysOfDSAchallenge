#include <iostream>
using namespace std;

// Function to print the Fibonacci series up to 'number' terms
void FibonacciSeries(int number) {
    int num1 = 0, num2 = 1, sum;

    cout << num1 << endl;
    cout << num2 << endl;

    for (int i = 3; i <= number; i++) {
        sum = num1 + num2;
        cout << sum << endl;
        num1 = num2;
        num2 = sum;
    }
}

int main() {
    // Print the Fibonacci series
    int num = 10; // print first 10 Fibonacci numbers

    cout<<"The fibonacci series is : ";
    FibonacciSeries(num);

    return 0;
}
