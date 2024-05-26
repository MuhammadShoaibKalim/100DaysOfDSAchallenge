#include <iostream>
using namespace std;

int main() {
    // reverse of a number . 
    int number;
    cout<<" Enter the number :";
    
    cin >> number;
     
     int multiplication = 1;
   while (number>0)
   {
    multiplication *=number%10;
    number /=10;

   }
   cout<<"The multiplication of digit of a number is : "<<multiplication;
    return 0;
}


