#include <iostream>
using namespace std;

int findPeakElement(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == size - 1 || arr[mid + 1] <= arr[mid])) {
            return mid;
        }

        if (mid < size - 1 && arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        } else {
           end = mid - 1;
        }
    }

    return -1; 
}

int main() {
    int array[] = {1, 3, 20, 4, 1, 0};
    int size = sizeof(array) / sizeof(array[0]);

    int peakIndex = findPeakElement(array, size);

    if (peakIndex != -1) {
        cout << "A peak element is present at index " << peakIndex << ", and its value is " << array[peakIndex] << endl;
    } else {
        cout << "No peak element found in the array." << endl;
    }

    return 0;
}
