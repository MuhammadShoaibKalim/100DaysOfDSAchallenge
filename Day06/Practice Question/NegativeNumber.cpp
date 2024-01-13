#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter a negative decimal number: ";
    cin >> n;

    unsigned int mask = 1 << 15; // Assuming 16-bit representation for simplicity
    while (mask > 0)
    {
        int bit = (n & mask) ? 1 : 0;
        cout << bit << " ";
        mask = mask >> 1;
    }

    cout << endl;

    return 0;
}
