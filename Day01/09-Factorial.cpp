#include <iostream>
using namespace std;

int main() {
    // factorial

    int num ;
    cout<<"Enter the number to print the factorial of that :";
    cin>>num;
     int fact;
     fact=num;
    for(int i = 1; i<num; i++)
    {
        fact = fact * i; 
    }
    cout<<"The factorial is : "<<fact;
    cout<<endl;

    return 0;
}