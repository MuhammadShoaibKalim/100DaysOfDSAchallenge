#include <iostream>
#include<math.h>
using namespace std;
int BinaryToDecimal(int n)
{
      int reminder;
      int sum=0;
      int i=0;
      while (n>0)
      {
        reminder=n%10;
        sum=sum+reminder*pow(2,i);
        n=n/10;
        i++;
      }
        cout<<"Decimal number is :"<<sum;
}
int main() {
    
    int num;
    cout<<"Enter number to convert binary to decimal :";
    cin>>num;

    BinaryToDecimal(num);
    return 0;
}
