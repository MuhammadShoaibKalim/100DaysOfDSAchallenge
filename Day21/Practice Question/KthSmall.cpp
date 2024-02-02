#include <iostream>
using namespace std;

int findKthSmallestElement(int arr[], int n, int k) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        if (i == k - 1) {
            return arr[i];
        }
    }
    return -1; // Kth smallest element not found
}

int main() {
    int arr[] = {12, 3, 5, 7, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // Find the 3rd smallest element
    
    int kthSmallest = findKthSmallestElement(arr, n, k);
    if (kthSmallest != -1) {
        cout << "Kth smallest element: " << kthSmallest << endl;
    } else {
        cout << "Kth smallest element not found." << endl;
    }
    
    return 0;
}
