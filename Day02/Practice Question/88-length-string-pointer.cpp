#include <iostream>
#include <string>

using namespace std;

int main() {
    string* str = new string;  
    cout << "Enter your string here: ";
    cin>>*str;  

    cout << "The length of the string is: " << str->length() << endl; 

    delete str; 
    return 0;
}
