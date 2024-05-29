#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int i, j;
    for (size_t i = 0; i <=5; i++)
    {
        for (size_t j = 0; j <=5; j++)
        {
           if(j<=i)
           {
            cout<<"*";
           }
           else
           {
            cout<<" ";
           }
        }
        cout<<endl;
        
    }
    
    return 0;
}