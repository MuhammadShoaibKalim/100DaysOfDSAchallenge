#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int num;
    cout<<" Enter the number to make armstrong ";
    cin>>num;
    
     int originalNum=num;
     cout<<" The original number is :"<<originalNum;
     int sum=0;
     int rem;
    while (num>0)
    {
        rem =num%10;
        sum=sum+rem*rem*rem;
        num=num/10;

    }
     
     if (sum==originalNum)
     
        cout<<" The given number is armstrong.";
     
     else
       cout<<" This is wrong number you put.";
    return 0;
}