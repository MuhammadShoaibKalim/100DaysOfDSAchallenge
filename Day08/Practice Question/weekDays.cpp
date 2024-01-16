#include <iostream>
using namespace std;

int main() {
    int day;

    cout << "Enter the day number (1-7): ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Day of the week: Sunday" << endl;
            break;

        case 2:
            cout << "Day of the week: Monday" << endl;
            break;

        case 3:
            cout << "Day of the week: Tuesday" << endl;
            break;

        case 4:
            cout << "Day of the week: Wednesday" << endl;
            break;

        case 5:
            cout << "Day of the week: Thursday" << endl;
            break;

        case 6:
            cout << "Day of the week: Friday" << endl;
            break;

        case 7:
            cout << "Day of the week: Saturday" << endl;
            break;

        default:
            cout << "Invalid day number!" << endl;
    }

    return 0;
}
