#include <iostream>
using namespace std;


void findMinElement(int arr[], int n, int& minElement, int& minIndex) {
    minElement = arr[0];
    minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < minElement) {
            minElement = arr[i];
            minIndex = i;
        }
    }
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minElement, minIndex;
    findMinElement(arr, n, minElement, minIndex);
    cout << "Minimum Element: " << minElement << " at index " << minIndex << endl;

    return 0;
}
