#include <iostream>
using namespace std;

int main() {
    /* armstrong of a number/narcissistic number: it checks if the sum 
       of the cubes of its digits equals the original number
     */
    int number;
    cout<<" Enter the number :";
    
    cin >> number;
     
     int original=number;
     int sum = 0;
     int reminder;
     while (number>0)
     {
       reminder = number % 10;
       sum = sum + reminder*reminder*reminder;
       number = number / 10;

     }
     if(sum==original)
     {
        cout<<"It is armstrong number : "<<sum;
     }
     else
     {
        cout<<"Please enter a good number :"<<sum;
     }
     return 0;
}


