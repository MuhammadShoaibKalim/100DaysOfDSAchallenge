#include <iostream>
using namespace std;

int main()
{
    // Print the prime numbers within a given range.
     
    int n, i, j;
    cout << "Enter the number: ";
    cin >> n;
    
   for (i = 2; i < n; i++)
   {
    for ( j = 2; j < i; j++)
    {
       if(i%j==0)
       {
        cout<<" ";
        break;
       }
    }

    if(j==i)
    {
        cout<<j<<" ";
    }
    
   }
   

    return 0;
}
