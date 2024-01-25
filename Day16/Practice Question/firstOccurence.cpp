#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end) {
        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end) {
        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int countOccurrences(int arr[], int n, int key) {
    int firstIndex = firstOcc(arr, n, key);

    if (firstIndex == -1) {
        // Key not found
        return 0;
    }

    int lastIndex = lastOcc(arr, n, key);

    return lastIndex - firstIndex + 1;
}

int main() {
    int even[6] = {0, 1, 2, 3, 4, 4};
    int key = 4;

    int occurrences = countOccurrences(even, 6, key);

    cout << "The total occurrences of " << key << " are: " << occurrences << endl;

    return 0;
}
