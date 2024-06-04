#include <iostream>
#include <string>
using namespace std;

string one[] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", 
                "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };

string ten[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };

string numToWords(int n, string s) {
    string str = "";
    if (n > 19) {
        str += ten[n / 10] + " " + one[n % 10];
    } else {
        str += one[n];
    }
    if (n) {
        str += s;
    }
    return str;
}

string convertToWords(int n) {
    string out;

    out += numToWords((n / 100) % 10, " Hundred ");
    out += numToWords(n % 100, "");

    return out;
}

int main() {
    int number;

    cout << "Enter a number (0-999): ";
    cin >> number;

    if (number == 0) {
        cout << "Zero" << endl;
    } else {
        cout << convertToWords(number) << endl;
    }

    return 0;
}
