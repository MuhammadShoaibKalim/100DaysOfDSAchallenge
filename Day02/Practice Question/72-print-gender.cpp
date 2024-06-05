#include <iostream>
using namespace std;

int main() {
    // print the gender of the person.

    char ch;
    cout<<"Please enter the char to check gender. ";
    cin>>ch;

    switch (ch)
    {
         case 'f':
         case 'F':
            cout<<" Female";
            break;
        case 'M':
        case 'm':
            cout<<" Male";
            break;
        case 'T':
        case 't':
            cout<<" Trasgender";  
            break;      
    default:
    cout<<"please enter the correct gender";
        break;
    }
    
    return 0;
}


