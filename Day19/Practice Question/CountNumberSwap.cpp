#include <iostream>
using namespace std;

int bubbleSortWithCount(int arr[], int n) {
    int swapCount = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapCount++;
            }
        }
    }
    return swapCount;
}

int main() {
    int arr[] = {5, 3, 8, 1, 2, 7, 9, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int swaps = bubbleSortWithCount(arr, n);

    cout << "Number of swaps: " << swaps << endl;

    return 0;
}
