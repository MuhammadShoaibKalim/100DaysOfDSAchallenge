#include <iostream>
using namespace std;

int main() {
    // swapping the numbers

    int num1 ;
    int num2 ;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // swapping the numbers in one way

    // int temp = num1;
    // num1 = num2;
    // num2 = temp;

 // swapping the numbers in second way

     num1 = num1 + num2;
     num2 = num1 - num2;
     num1 = num1 - num2;

    // printing the swapped numbers

    cout << "The first number is: " << num1 << endl;
    cout << "The second number is: " << num2 << endl;

    
    return 0;
}