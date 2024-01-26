#include <iostream>
using namespace std;

int findFirstOccurrence(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (key == arr[mid]) {
            ans = mid;
            end = mid - 1;
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans;
}

int findLastOccurrence(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (key == arr[mid]) {
            ans = mid;
            start = mid + 1;
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans;
}

int countOccurrences(int arr[], int size, int key) {
    int first = findFirstOccurrence(arr, size, key);
    if (first == -1) {
        return 0;
    }

    int last = findLastOccurrence(arr, size, key);

    return last - first + 1;
}

int main() {
    int array[] = {1, 2, 3, 4, 4, 4, 5, 6};
    int key = 4;
    int occurrences = countOccurrences(array, 8, key);

    if (occurrences > 0) {
        cout << key << " occurs " << occurrences << " times in the array." << endl;
    } else {
        cout << key << " not found in the array." << endl;
    }

    return 0;
}
