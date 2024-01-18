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

    cout << "Unique elements in the array: ";

    for (int i = 0; i < size; ++i) {
        bool isUnique = true;
        for (int j = 0; j < size; ++j) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;

    return 0;
}
