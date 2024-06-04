#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int num;
    cout<<" Enter the number :";
    cin>>num;
    
    int reminder;
    int sum=0;
    int originalValue=num;
    // cout<<"The original value is :"<<originalValue;
    
    while (num>0)
    {
        reminder = num%10;
        sum = sum * 10 + reminder;
        num =num/10;
    }
    cout<<"\nThe reversed value is :"<<sum;

    if(sum==originalValue)
    {
        cout<<"\nThe number is a palindrome";
    }
    else
    {
        cout<<"\nThe number is not a palindrome";
    }
    

    return 0;
}


 