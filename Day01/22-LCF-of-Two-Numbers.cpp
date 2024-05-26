#include <iostream>
using namespace std;

int main() {
    // HCF and LCM of Two Numbers

    int a, b;
    cout << "Enter the values of two numbers: ";
    cin >> a >> b;

    int originalA = a, originalB = b;
    int HCF, r;

    // Calculate HCF using the Euclidean algorithm
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    HCF = a; // 'a' holds the HCF when 'b' becomes 0

    // Calculate LCM using the relationship between LCM and HCF
    int LCM = (originalA * originalB) / HCF;

    cout << "HCF of " << originalA << " and " << originalB << " is " << HCF << endl;
    cout << "LCM of " << originalA << " and " << originalB << " is " << LCM << endl;

    return 0;
}
