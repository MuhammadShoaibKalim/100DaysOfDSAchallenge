#include <iostream>
using namespace std;

int main() {
    const int size = 6;
    int arr[size] = {4, 2, 8, 8, 2, 4};

    bool isPalindrome = true;
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The array is a palindrome." << endl;
    } else {
        cout << "The array is not a palindrome." << endl;
    }
    return 0;
}
