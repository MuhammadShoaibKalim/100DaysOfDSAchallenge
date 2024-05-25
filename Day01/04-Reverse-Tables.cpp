#include <iostream>
using namespace std;

int main() {
    // Print Reverse tables of 2,3,4,5,6

    cout<<"Enter number to print the table of that number ";
    int number;
    cin>>number;
    switch (number)
    {
    case 2:
       for(int i=10;i>=1; i--)
       {
        cout<<number<<" * "<<i<<" = "<<number*i<<endl;
       }
        break;
       
      case 3:
      for(int i=10;i>=1; i--)
       {
        cout<<number<<" * "<<i<<" = "<<number*i<<endl;
       }
        break;

         case 4:
      for(int i=10;i>=1; i--)
       {
        cout<<number<<" * "<<i<<" = "<<number*i<<endl;
       }
        break;

         case 5:
       for(int i=10;i>=1; i--)
       {
        cout<<number<<" * "<<i<<" = "<<number*i<<endl;
       }
        break;
    default:
    cout<<"Enter number between 2 to 5 or valid number.";
        break;
    }
    
    return 0;
}