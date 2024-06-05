#include <iostream>
using namespace std;

int main() {
    // HCF-of-Two-Numbers

    int a, b;
    cout << "Enter the values of two numbers: ";
    cin >> a >> b;

    int originalA = a, originalB = b;
    int HCF, r;
 
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
 
    HCF = a;  // 'a' holds the HCF when 'b' becomes 0
    int LCM;
    LCM = (originalA * originalB) / HCF;

     cout << "HCF of " << originalA << " and " << originalB << " is " << HCF << endl;
     cout << "LCM of " << originalA << " and " << originalB << " is " << LCM << endl;
   
    return 0;
}   


