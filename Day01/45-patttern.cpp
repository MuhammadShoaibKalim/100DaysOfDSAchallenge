#include <iostream>
using namespace std;

int main()
{
    // Your code goes here

    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j <= 6 - i || j + 4 <= i)
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
