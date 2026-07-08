class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> solution;
        for(int i=0;i<nums.size();i++){
            solution.push_back(i);
            for(int j=i+1; j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    solution.push_back(j);
                    return solution;
                }
            }
            solution.pop_back();
        }
    }
};
