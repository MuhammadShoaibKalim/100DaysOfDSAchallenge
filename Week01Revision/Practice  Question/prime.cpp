//Check a given value is prime or not.
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int i = 2;  

    while( i<n)
    {
        if(n%i==0)
        {
            cout << "Not a prime number";
            return 0;
        }
        i++;
    }
    
    cout<<" Prime";

    return 0;
}
