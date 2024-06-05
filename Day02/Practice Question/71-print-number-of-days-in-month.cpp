#include <iostream>
using namespace std;

int main() {
    // Variable to hold the month number
    int month_num;

    // Get the month number from the user
    cout << "Enter the value of month (1-12): ";
    cin >> month_num;

    // Perform the calculation based on the month number
    switch (month_num) {
        case 1: 
            cout << "January has 31 days." << endl;
            break;
        case 2: 
            cout << "February has 28 or 29 days." << endl;
            break;
        case 3: 
            cout << "March has 31 days." << endl;
            break;
        case 4: 
            cout << "April has 30 days." << endl;
            break;
        case 5:    
            cout << "May has 31 days." << endl;
            break;    
        case 6: 
            cout << "June has 30 days." << endl;
            break;
        case 7: 
            cout << "July has 31 days." << endl;
            break;
        case 8: 
            cout << "August has 31 days." << endl;
            break;
        case 9: 
            cout << "September has 30 days." << endl;
            break;
        case 10:    
            cout << "October has 31 days." << endl;
            break;   
        case 11:    
            cout << "November has 30 days." << endl;
            break;   
        case 12:    
            cout << "December has 31 days." << endl;
            break;          
        default:
            cout << "Enter a month number between 1 to 12." << endl;
            break;
    }

    return 0;
}
