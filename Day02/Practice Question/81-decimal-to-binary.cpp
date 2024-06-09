#include <iostream>
using namespace std;

void DecimalToBinary(int n) {
    // Array to store binary number
    int binary[32];
    int i=0;
    int reminder ;
    while(n>0){
        binary[i]=n%2;
         n= n/2;
         i++;
    }
    // Print binary array in reverse order

    cout << "Binary number: ";
    for (size_t j=0; j < i; j++)
    {
        cout << binary[j];
    }
    cout << endl;
    
   
}

int main() {
    int num;
    cout << "Enter number to convert decimal to binary: ";
    cin >> num;

    DecimalToBinary(num);
    return 0;
}
