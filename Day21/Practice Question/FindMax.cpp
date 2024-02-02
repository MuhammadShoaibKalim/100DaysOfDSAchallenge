#include <iostream>
using namespace std;

int findMaximumElement(int arr[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int maxIndex = findMaximumElement(arr, n);
    
    cout << "Maximum element: " << arr[maxIndex] << " at index: " << maxIndex << endl;
    
    return 0;
}
