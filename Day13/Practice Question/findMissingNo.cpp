#include<iostream>
using namespace std;

int MissingNumber(int arr[], int size) {      
    int expectedSum = size * (size + 1) / 2;
    int actualSum = 0;
    
    for(int i = 0; i <size; i++) {
        actualSum += arr[i];
    }
    
    return expectedSum-actualSum;
}

int main() {
    int n = 7;
    int array[7] = {1, 2, 4, 3, 6, 7 };

    int missing = MissingNumber(array, n);

    cout << "The MissingNumber is: " << missing;

    return 0;
}
