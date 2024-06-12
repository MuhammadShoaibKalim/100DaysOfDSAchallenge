#include <iostream>
#include <algorithm> // For std::sort
using namespace std;

int main() {
    int arr[5];
    cout << "Enter the array elements: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    
    int n = 5;
    int searching_number;

    cout << "Enter the element to search for: ";
    cin >> searching_number;

    // Sort the array before performing binary search
    sort(arr, arr + n);

    int start = 0;
    int end = n - 1;
    int mid;
    bool found = false;

    while (start <= end) {
        mid = (start + end) / 2;
        if (arr[mid] == searching_number) {
            cout << "Element found at index: " << mid << endl;
            found = true;
            break;
        } else if (arr[mid] < searching_number) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    if (!found) {
        cout << "Element not found" << endl;
    }

    return 0;
}
