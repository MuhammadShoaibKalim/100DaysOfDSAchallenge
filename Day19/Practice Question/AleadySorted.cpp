#include <iostream>
using namespace std;

bool isAlreadySorted(int arr[], int n) {
    bool sorted = true;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = false;
            break;
        }
    }
    return sorted;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isAlreadySorted(arr, n)) {
        cout << "Array is already sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }

    return 0;
}
