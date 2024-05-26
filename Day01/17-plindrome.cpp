#include <iostream>
using namespace std;

int main() {
    // palindrome of a number . 
    int number;
    cout<<" Enter the number :";
    
    cin >> number;
     
     int original=number;
     int sum = 0;
     int reminder;
   while (number>0)
   {
    reminder = number % 10;
    sum = sum * 10 + reminder;
    number = number / 10;

   }
    if(sum==original)
    {
        cout<<"It is palindrome number : "<<sum;
    }
    else
    {
        cout<<"Please enter a good number :"<<sum;
    }
    return 0;
}


