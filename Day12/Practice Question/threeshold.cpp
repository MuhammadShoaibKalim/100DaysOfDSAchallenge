#include <iostream>
using namespace std;

int main() {
    const int size = 6;
    int arr[size] = {14, 8, 25, 5, 19, 12};
    int threshold = 15;

    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > threshold) {
            count++;
        }
    }

    cout << "Number of elements greater than " << threshold << ": " << count << endl;
    return 0;
}
