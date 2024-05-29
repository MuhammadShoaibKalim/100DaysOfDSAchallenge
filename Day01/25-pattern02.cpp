#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int i, j, n=5;
    for (size_t i = 0; i <=n; i++)
    {
        for (size_t j = 0; j <=n; j++)
        {
           if(j<=n-i)
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





/*
#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int i, j, n=5;
    for (size_t i = 0; i <=n; i++)
    {
        for (size_t j = 0; j<n-i; j++)
        {
           
            cout<<"*";
           }
       
        cout<<endl;
        
    }
    
    return 0;
}
*/