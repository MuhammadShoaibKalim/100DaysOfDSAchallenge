#include <iostream>
using namespace std;

// Function to search for the key in the array
bool searchKey(int arr[], int size, int key, int& position) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            position=i;
            return true; // Key found
        }
    }
    return false; // Key not found
}

int main() {
    const int maxSize = 100; // Define a maximum size for the array
    int arr[maxSize];
    int size, key, position;

    // Input array size from the user
    cout << "Enter the size of the array: ";
    cin >> size;

    // Input array elements from the user
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    // Input the key to search from the user
    cout << "Enter the key to search: ";
    cin >> key;

    // Call the searchKey function to check if the key is present
    if (searchKey(arr, size, key, position)) {
        cout << "Key " << key << " is present in the array" <<endl<<"And it is present at "<<position<<endl;
    } else {
        cout << "Key " << key << " is not present in the array." << endl;
    }

    return 0;

}
