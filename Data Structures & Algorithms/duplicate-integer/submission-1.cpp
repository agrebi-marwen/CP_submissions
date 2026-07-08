#include <vector>
#include <algorithm>


/*
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
*/

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums){
            if(seen.count(num)){
                return true;
            }
            else{
                seen.insert(num);
            }
        }
        return false;
        
    }
};