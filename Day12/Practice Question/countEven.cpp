#include <iostream>
using namespace std;

int main() {
    const int size = 6;
    int arr[size] = {3, 8, 12, 5, 10, 7};

    int evenCount = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        }
    }

    cout << "Number of even elements in the array: " << evenCount << endl;

    return 0;
}
