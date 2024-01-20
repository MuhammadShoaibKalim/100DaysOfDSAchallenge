#include <iostream>
#include<climits>
using namespace std;

int main() {
    const int size = 8;
    int arr[size] = {7, 12, 5, 8, 11, 6, 9, 14};

    int firstMax = INT_MIN; 
    int secondMax = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
        }
    }

    cout << "Second largest element in the array: " << secondMax << endl;

    return 0;
}
