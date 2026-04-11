class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Traverse each element
        for(int i = 0; i < nums.size(); i++) {
            // Check with every next element
            for(int j = i + 1; j < nums.size(); j++) {
                // If pair sum equals target, return indices
                if(nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        
        return {0}; // No valid pair found
    }
};