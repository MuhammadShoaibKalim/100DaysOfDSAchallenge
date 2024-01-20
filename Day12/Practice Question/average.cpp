#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int arr[size] = {12, 18, 10, 6, 15};

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    double average = static_cast<double>(sum) / size;

    cout << "Average of array elements: " << average << endl;

    return 0;
}
