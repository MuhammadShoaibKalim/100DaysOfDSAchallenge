#include <iostream>
using namespace std;

int main() {
    // Declare variables for the operator and the two numbers
    char ch_value;
    int num1, num2;

    // Get the operator from the user
    cout << "Enter the value of char for calculation (+, -, *, /, %): ";
    cin >> ch_value;

    // Get the two numbers from the user
    cout << "Enter value of num1 and num2: ";
    cin >> num1 >> num2;

    // Perform the calculation based on the operator
    switch (ch_value) {
        case '-': 
            cout << "The subtraction of two numbers is: " << num1 - num2 << endl;
            break;
        case '+': 
            cout << "The sum of two numbers is: " << num1 + num2 << endl;
            break;
        case '*': 
            cout << "The multiplication of two numbers is: " << num1 * num2 << endl;
            break;
        case '/': 
            if (num2 != 0) {
                cout << "The division of two numbers is: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        case '%': 
            if (num2 != 0) {
                cout << "The modulus of two numbers is: " << num1 % num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;    
        default:
            cout << "Enter a valid char value (+, -, *, /, %)." << endl;
            break;
    }

    return 0;
}


