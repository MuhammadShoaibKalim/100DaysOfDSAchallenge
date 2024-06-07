#include <iostream>
#include <cstring> // For strlen
using namespace std;
int StringLength(char str[])
{
     
    int length = strlen(str);

    // Print the length of the string
    cout << "The length of the string is: " << length << endl;
}
int main() {

    // Declare a string
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    StringLength(str);

    return 0;
}


