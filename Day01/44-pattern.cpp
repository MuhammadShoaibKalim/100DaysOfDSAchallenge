#include <iostream>
using namespace std;

int main()
{
    // Your code goes here

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j >= i + 4 || j <= 6 - i)
            {
                cout << "*";
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

