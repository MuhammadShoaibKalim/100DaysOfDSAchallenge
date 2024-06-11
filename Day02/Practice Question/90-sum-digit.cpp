#include <iostream>
using namespace std;

int main() {
    // sum of digit of number

    int num;
    cout<<" Enter value of number :";
    cin>>num;

    int sum = 0;
    int rem;
    while (num>0)
    {
        rem = num%10;
        sum +=rem;
        num =num/10;
    }
    cout<<" The sum of digit of a number :"<<sum;
    
    return 0;
}

