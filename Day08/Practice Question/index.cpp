#include<iostream>
using namespace std;

int main() {
    
    int amount;
    cout<<"Enter the amount :";
    cin >> amount;

    int Rs100 = 0, Rs50 = 0, Rs20 = 0, Rs1 = 0;

    int denomination;

    while (amount > 0) {
        cout << "Enter denomination (100, 50, 20, 1) or 0 to finish: ";
        cin >> denomination;

        switch (denomination) {
            case 100:
                Rs100 = amount / 100;
                amount = amount % 100;
                cout << "No of 100 Rupee = " << Rs100 << endl;
                break;

            case 50:
                Rs50 = amount / 50;
                amount = amount % 50;
                cout << "No of 50 Rupee = " << Rs50 << endl;
                break;

            case 20:
                Rs20 = amount / 20;
                amount = amount % 20;
                cout << "No of 20 Rupee = " << Rs20 << endl;
                break;

            case 1:
                Rs1 = amount / 1;
                amount = amount % 1;
                cout << "No of 1 Rupee = " << Rs1 << endl;
                break;

            case 0:
                break;
            default:
                cout << "Invalid denomination. Please enter a valid denomination." << endl;
                break;
        }
    }

    return 0;
}
