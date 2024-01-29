#include <iostream>
using namespace std;


void findMaxElement(int arr[], int n, int& maxElement, int& maxIndex) {
    maxElement = arr[0];
    maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxElement, maxIndex;
    findMaxElement(arr, n, maxElement, maxIndex);
    cout << "Maximum Element: " << maxElement << " at index " << maxIndex << endl;

    return 0;
}
