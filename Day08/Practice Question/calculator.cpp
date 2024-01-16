#include<iostream>
using namespace std;

int main() {
    
    int a,b;
    cout<<"Enter the value of a  and b:";
    cin >> a>>b;

    char oper;
    cout<<"Enter the operator :";
    cin>>oper;
    switch(oper)
    {
        
        case '-':
          cout<<"The subtraction of a and b is :"<<a+b;
          break;

        case '+':
          cout<<"The sum of a and b is :"<<a+b;
          break;

          case '*':
          cout<<"The multi of a and b is :"<<a*b;
          break;

          case '/':
          cout<<"The division of a and b is :"<<a/b;
          break;

          case '%':
          cout<<"The modulus of a and b is :"<<a%b;
          break;

          default:
          cout<<"The given operator is wrong.";
    
      }
    
}