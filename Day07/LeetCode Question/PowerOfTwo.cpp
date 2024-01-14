#include <iostream>

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 0) {
            return false;
        }

        while (n % 2 == 0) {
            n /= 2;
        }

        return n == 1;
    }
};

int main() {
    Solution solution;

    // Example usage
    int input = 16;
    bool result = solution.isPowerOfTwo(input);

    std::cout << input << " is " << (result ? "a" : "not a") << " power of two." << std::endl;

    return 0;
}
