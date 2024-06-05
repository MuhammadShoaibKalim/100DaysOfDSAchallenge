#include <iostream>
using namespace std;

int main() {
    // Enter the number to print which one is greater.

    int num1, num2;
    cout<<"Please enter the value of num1 and num2. ";
    cin>>num1>>num2;



    switch (num1>num2)
    {
         case 1:
               cout<<num1<<" is the maximum number.";
         break;
    case 2:
              cout<<num2<<" is the minimum number.";
         break;
       default:
             cout<<"please enter the correct number";
        break;
    }
    
    return 0;
}



