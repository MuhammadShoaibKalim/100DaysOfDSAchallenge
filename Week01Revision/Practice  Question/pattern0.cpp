//   4321
//   4321
//   4321
//   4321
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = n;
        while (j >= 1) {
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }

    return 0;
}
