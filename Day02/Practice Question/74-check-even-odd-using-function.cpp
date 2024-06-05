#include <iostream>
using namespace std;
int checkEvenOdd(int num)
{
     if(num%2==0)
 {
     cout<<"The number is even";
 }
 else
 {
     cout<<"The number is odd";
 }
}

int main() {
     int num;
 cout<<"Enter a number: ";
 cin>>num;
    
     checkEvenOdd(num);

    return 0;
}

