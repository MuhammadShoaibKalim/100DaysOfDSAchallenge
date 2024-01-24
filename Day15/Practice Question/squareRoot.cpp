#include <iostream>

int sqrtBinarySearch(int x) {
    if (x == 0 || x == 1) {
        return x;
    }

    int left = 1, right = x, result = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (mid <= x / mid) {
            left = mid + 1;
            result = mid;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    int x = 16;

    int result = sqrtBinarySearch(x);

    std::cout << "Square root of " << x << " is: " << result << std::endl;

    return 0;
}
