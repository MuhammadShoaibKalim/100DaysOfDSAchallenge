#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int searchElement;
    cout << "Enter the element to search: ";
    cin >> searchElement;

    bool found = false;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == searchElement) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Element found in the array." << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
