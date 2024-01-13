#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int n;

    cout << "Enter a negative decimal number: ";
    cin >> n;

    // Use std::bitset to directly convert a decimal number to binary
    // Note: This assumes the size of the binary representation you want (e.g., 16 bits)
    bitset<16> binaryRepresentation(n);

    cout << "Binary representation: " << binaryRepresentation << endl;

    return 0;
}
