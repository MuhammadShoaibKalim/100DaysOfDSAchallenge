// Print 1 to n
#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 1;
    cout << "Enter the value of n: ";
    cin >> n;

    // for (int i = 1; i <= n; ++i) {
    //     cout << i << " ";
    // }

    while (i <= n)
    {
        cout << i << " ";
        i = i + 1;
    }

    return 0;
}
