#include <vector>

class Solution {
public:

    int binarySearch(std::vector<int>& nums, int start, int end, int target) {
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] < target) {
                start = mid + 1;
            } else if (nums[mid] >= target) {
                end = mid - 1;
            }
        }
        return start;
    }

    int searchInsert(std::vector<int>& nums, int target) {
        return binarySearch(nums, 0, nums.size() - 1, target);
    }
};
