#include <iostream>
#include <cmath>
using namespace std;

double power(double base, int exponent)
{
    return pow(base, exponent);
}

int main() {
    double base;
    int exponent;

    cout<<"Enter the base :";
    cin>>base;

    cout<<"Enter the exponent :";
    cin>>exponent;

    cout<<"The power of given number exponent its base :"<<power(base, exponent);
    return 0;
}
