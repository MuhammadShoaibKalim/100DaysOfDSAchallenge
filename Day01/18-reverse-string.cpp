#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    string reversedString = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedString += str[i];
    }
    
    cout << "The reverse a string is: " << reversedString << endl;
    
    return 0;
}
