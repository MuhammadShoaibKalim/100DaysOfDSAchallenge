#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int smallindex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[smallindex])
                smallindex = j;
        }
        swap(arr[smallindex], arr[i]);
    }
}

int main() {
    int n = 5;
    int arr[] = {3, 7, 5, 2, 1};

   
  
    cout << " Unsorted Array is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } 


     cout<< endl;
     SelectionSort(arr, n);

    cout << "Sorted Array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
