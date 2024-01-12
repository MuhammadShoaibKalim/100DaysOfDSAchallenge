#include<iostream>
using namespace std;
int main()
{
    cout<<"Pre Increment"<<endl;
     //Pre Increment
    int a=4;
    int b=++a;
    cout<<a<<endl; //5
    cout<<b<<endl;  //5


    cout<<"Post Increment"<<endl;
    //Post Increment
     int c=4;
     int d=c++;  
     cout<<c<<endl;  //5
     cout<<d<<endl; //4

}