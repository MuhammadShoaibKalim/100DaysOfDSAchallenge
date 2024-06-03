#include <iostream>
using namespace std;

int main() {
    // reverse a string given by user.

    string my_string ;
    cout<<" Enter your string :";
    cin>>my_string;

    for (size_t i = 0; i < my_string.length(); i++)
    {
         cout<<my_string[my_string.length()-i-1];
    }
    
    //  string reversedString = "";
    // for (int i = str.length() - 1; i >= 0; i--) {
    //     reversedString += str[i];
    // }
    
    // cout << "The reverse a string is: " << reversedString << endl;
    
    
    return 0;
}