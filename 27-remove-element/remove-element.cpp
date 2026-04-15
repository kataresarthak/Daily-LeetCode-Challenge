class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0; i < nums.size(); i++){
            // If current element is not equal to val
            if(nums[i] != val){
                nums[k] = nums[i]; // Place it at 'index'
                k++; // Move index forward
            }
        }
        
        return k; // New length of array after removal
    }
};