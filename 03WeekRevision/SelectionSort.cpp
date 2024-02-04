#include <iostream>
using namespace std;

void SelectionSort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        int min = i;
        for(int j = i + 1; j < size; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        // Swap arr[i] with the minimum element
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main() {
    int arr[10] = {7, 2, 5, 3, 6, 1, 4, 9, 8, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    SelectionSort(arr, size);

    cout << "Sorted array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
