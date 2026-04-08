class Solution {      
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;   // Return 0 if array is empty

        int res = 1;                     // Pointer for position of next unique element
        for(int i = 1; i < nums.size(); i++) {  // Traverse from second element
            if(nums[i] != nums[i - 1]) {  // Check if current element is different
                nums[res] = nums[i];     // Place unique element at correct position
                res++;                  // Move pointer forward
            }
        }
        return res;                     // Return number of unique elements
    }
};