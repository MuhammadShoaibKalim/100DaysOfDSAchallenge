#include <iostream>
using namespace std;

int findLargestElement(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return arr[n - 1];
}

int main() {
    int arr[] = {5, 3, 8, 1, 2, 7, 9, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = findLargestElement(arr, n);

    cout << "Largest element: " << largest << endl;

    return 0;
}
