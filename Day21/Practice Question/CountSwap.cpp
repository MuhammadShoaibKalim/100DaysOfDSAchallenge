#include <iostream>
using namespace std;

int insertionSortAndCountSwaps(int arr[], int n) {
    int swaps = 0;
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
            swaps++;
        }
        arr[j + 1] = key;
    }
    return swaps;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int swaps = insertionSortAndCountSwaps(arr, n);
    
    cout << "Number of swaps: " << swaps << endl;
    
    return 0;
}
