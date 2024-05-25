#include <iostream>
using namespace std;

int main() {
    // check odd or even
    cout<<"Enter a number to check if it is odd or even : ";
    int number;

    cin>>number;
    if(number%2==0)
    {
     cout<<number<<" : is an even number";
    }
    else
    {
     cout<<number<<" : is an odd number";
    }
    return 0;
}