#include <iostream>
using namespace std;

int findMinimumElement(int arr[], int n) {
    int minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int minIndex = findMinimumElement(arr, n);
    
    cout << "Minimum element: " << arr[minIndex] << " at index: " << minIndex << endl;
    
    return 0;
}
