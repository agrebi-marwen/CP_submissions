#include <vector>
#include <algorithm>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::vector<int> seen;
        int i=0;
        while (i<nums.size()){
            if (std::ranges::contains(seen, nums[i])) {
                return true;
            }else{
                seen.push_back(nums[i]);
                i++;

            }
        }
        return false;
    }
};