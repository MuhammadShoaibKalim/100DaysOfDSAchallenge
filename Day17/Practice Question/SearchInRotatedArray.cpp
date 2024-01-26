#include <iostream>
using namespace std;

int searchRotatedArray(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            return mid;
        }

        if (arr[start] <= arr[mid]) {
            if (key >= arr[start] && key < arr[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        } else {
            if (key > arr[mid] && key <= arr[end]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main() {
    int array[] = {4, 5, 6, 7, 0, 1, 2};
    int key = 0;
    int index = searchRotatedArray(array, 7, key);

    if (index != -1) {
        cout << key << " found at index: " << index << endl;
    } else {
        cout << key << " not found in the array." << endl;
    }

    return 0;
}
