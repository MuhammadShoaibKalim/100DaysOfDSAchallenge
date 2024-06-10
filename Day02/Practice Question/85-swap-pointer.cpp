#include <iostream>
using namespace std;
int swap(int *num1, int *num2)
{
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;

    return 0;
}
int main() {
     int a;
     int b;
     cout<<" Enter the value of a and b :";
     cin>>a>>b;

     cout<<" The value of a and b before swapping : "<<a<<" and "<<b<<endl;
     
     swap(&a, &b);
     cout<<" The value of a and b after swapping : "<<a<<" and "<<b<<endl;

    return 0;
}
