#include <iostream>
using namespace std;

int main()
{
    // Your code goes here
    int i, j, n = 5, m = 9;
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <= m; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
            {
                cout << " ";
            }
            else
            {
               cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}
