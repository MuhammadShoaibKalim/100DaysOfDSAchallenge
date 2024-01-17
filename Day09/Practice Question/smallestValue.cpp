#include <iostream>
#include <climits>
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

    int minElement = INT_MAX;

    for (int i = 0; i < size; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    cout << "Smallest element in the array: " << minElement << endl;

    return 0;
}
