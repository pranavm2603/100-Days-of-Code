class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     int n = nums.size();
        int nextNonZero = 0;
        
        // Iterate through the array
        for (int i = 0; i < n; ++i) {
            // If current element is non-zero, swap it with the nextNonZero element
            if (nums[i] != 0) {
                swap(nums[i], nums[nextNonZero]);
                nextNonZero++;
            }
        }
    }
};
