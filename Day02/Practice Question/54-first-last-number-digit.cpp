#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int number;
    cout<<" Enter number :";
    cin>>number;

    int last =number%10;
    cout<<" The last number of digit is :"<<last<<endl;
    
    while (number>10)
    {
        number=number/10;
    }
    
    cout<<" The first :"<<number;


    return 0;
}