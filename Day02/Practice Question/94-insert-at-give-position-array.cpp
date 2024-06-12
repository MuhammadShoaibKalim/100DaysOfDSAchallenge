#include <iostream>
using namespace std;

void InsertElement(int arr[], int &num, int newElement, int position) {
    // Shift elements to the right to make room for the new element
    for (int i = num; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    // Insert the new element
    arr[position] = newElement;
    // Increase the size of the array
    num++;
}

int main() {
    int arr[11]; // Array with space for one extra element
    int n = 10;  // Initial size of the array

    // Read the array elements
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int newElement, position;

    cout << "Enter new element: ";
    cin >> newElement;

    cout << "Enter position: ";
    cin >> position;

    // Check if the position is valid
    if (position < 0 || position > n) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    // Insert the new element into the array
    InsertElement(arr, n, newElement, position);

    // Print the new array
    cout << "The new array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
