#include <iostream>
#include <vector>

int findPeakElement(const std::vector<int>& nums) {
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] > nums[mid + 1]) {
            // The peak must be on the left side
            right = mid;
        } else {
            // The peak must be on the right side (or equal)
            left = mid + 1;
        }
    }

    return left;
}

int main() {
    std::vector<int> nums = {5, 2, 3, 1};

    int peakIndex = findPeakElement(nums);

    std::cout << "Peak element found at index: " << peakIndex << std::endl;

    return 0;
}
