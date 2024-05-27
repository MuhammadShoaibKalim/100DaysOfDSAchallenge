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

/*
#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1;
    int sum = 0;
    int number;

    cout << "Enter the number of Fibonacci terms to print: ";
    cin >> number;

    if (number <= 0) {
        cout << "Number of terms must be greater than 0." << endl;
        return 1; // Exit the program with an error code
    }

    cout << a << " " << b; // Print the first two terms

    for (int i = 3; i <= number; ++i) {
        sum = a + b;
        cout << " " << sum;
        a = b;
        b = sum;
    }

    cout << endl;

    return 0;
}
adding another efficient solution here

*/
