#include <iostream>
using namespace std;

bool isUnique(int arr[], int size, int index) {
    for (int i = 0; i < size; ++i) {
        if (i != index && arr[i] == arr[index]) {
            return false;
        }
    }
    return true;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Unique elements in the array: ";
    for (int i = 0; i < size; ++i) {
        if (isUnique(arr, size, i)) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
