#include <iostream>
using namespace std;

int main()
{
    // Your code goes here
    int i, j;
    for (size_t i = 1; i <= 5; i++)
    {
        for (size_t j = 1; j <= 9; j++)
        {
            if (j >= 6-i && j <=4+i)
            {
                cout << " * ";
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
