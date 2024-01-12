#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int b=6;

    cout<<" a&b "<<(a&b)<<endl;
    cout<<" a|b "<<(a|b)<<endl;
    cout<<" a^b "<<(a^b)<<endl;
    cout<<" a~b "<<(~a)<<endl;

    cout<<(21<<2)<<endl;     //21*2=42*2=84
    cout<<(19>>2)<<endl;    //19/2=9/2=4.5=4
    cout<<(17>>1)<<endl;   //17/2=8.5=8
    
   
    return 0;
}