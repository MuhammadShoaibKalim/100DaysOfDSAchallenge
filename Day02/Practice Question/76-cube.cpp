#include <iostream>
using namespace std;
double cube(int num){
    return (num*num*num);
}
int main() {
    // Your code goes here
    int num;
    double d;
    cout<<" Enter the number to print cube of number :";
    cin>>num;



    d=cube(num);
    cout<<d;

    return 0;
}
