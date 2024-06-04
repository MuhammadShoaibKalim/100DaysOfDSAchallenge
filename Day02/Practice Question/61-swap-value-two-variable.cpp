#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int num1, num2;
    cout<<" Enter the value of  num1, num2 :";
    cin>>num1>>num2;
    cout<<" Before Swapping : "<<num1<<" "<<num2<<endl;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    cout<<" After Swapping : "<<num1<<" "<<num2<<endl;


    return 0;
}