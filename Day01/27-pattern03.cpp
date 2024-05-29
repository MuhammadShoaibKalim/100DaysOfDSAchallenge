#include <iostream>
using namespace std;

int main()
{
    // Your code goes here
    int i, j, n = 5;
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <= n; j++)
        {
            if (j >= i)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
