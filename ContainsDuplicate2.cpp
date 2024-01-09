#include <vector>
#include <unordered_map>

class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            if (mp.count(nums[i]) > 0 && std::abs(mp[nums[i]] - i) <= k) {
                return true;
            }
            mp[nums[i]] = i;
        }
        return false;
    }
};
