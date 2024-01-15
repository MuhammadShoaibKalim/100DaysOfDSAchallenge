#include <iostream>

class Solution {
public:
    int bitwiseComplement(int N) {
        if (N == 0) {
            return 1;
        }

        int mask = 1;

     
        while (mask < N) {
            mask = (mask << 1) + 1;
        }

        return mask ^ N;
    }
};

int main() {
    Solution solution;

    // Example usage
    int input = 5;
    int result = solution.bitwiseComplement(input);

    std::cout << "Bitwise complement of " << input << " is: " << result << std::endl;

    return 0;
}
