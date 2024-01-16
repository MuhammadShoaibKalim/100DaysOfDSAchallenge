#include <iostream>
using namespace std;

void fibonacciSeries(int limit) {
    int a = 0, b = 1, next;

    cout << "Fibonacci Series up to " << limit << ": ";
    cout << a << " " << b << " ";

    while ((a + b) <= limit) {
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }

    cout << endl;
}

int main() {
    int limit;

    cout << "Enter the limit for Fibonacci Series: ";
    cin >> limit;

    fibonacciSeries(limit);

    return 0;
}
