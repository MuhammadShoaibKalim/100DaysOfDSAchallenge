#include<iostream>
using namespace std;

int MissingNumber(int arr[], int size) {      
    int expectedXOR = 0;
    int actualSumXOR = 0;
    
    for(int i = 0; i <size; i++) {
        actualSumXOR ^= arr[i];
    }
    
    return expectedXOR^actualSumXOR ;
;
}

int main() {
    int n = 7;
    int array[7] = {1, 2, 4, 3, 6, 7 };

    int missing = MissingNumber(array, n);
    cout << "The MissingNumber is: " << missing;

    return 0;
}
