#include<iostream>
using namespace std;

int missingNumber(int arr[], int n) {
    int sum = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++) {
        sum = sum - arr[i];
    }
    return sum;
}

int main() {
    const int size = 5;
    int arr[size] = {1, 3, 4, 5, 7};
    
    int missing = missingNumber(arr, size);

    cout << "Missing number is " << missing;

    return 0;
}
