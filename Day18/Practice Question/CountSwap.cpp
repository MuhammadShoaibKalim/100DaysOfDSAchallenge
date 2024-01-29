#include <iostream>
using namespace std;


int selectionSortWithCount(int arr[], int n) {
    int swapCount = 0;
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
        swapCount++;
    }
    return swapCount;
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int swaps = selectionSortWithCount(arr, n);
    cout << "Number of Swaps: " << swaps << endl;

    return 0;
}
