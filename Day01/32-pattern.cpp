#include <iostream>
using namespace std;

int main()
{
    // Your code goes here
    int i, j, n = 5, count=1 ;
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <= n; j++)
        {
               if(j<=n-i)
               {
            cout << " ";
               }
               else
               {
                cout<<i;
               }
        }
        cout << endl;
    }

    return 0;
}
