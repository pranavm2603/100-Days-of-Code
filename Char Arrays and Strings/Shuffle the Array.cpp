class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result(2 * n); // Initialize the result array
        
        // Iterate over the first half of the array
        for (int i = 0; i < n; ++i) {
            // Place the elements from the first half at even indices in the result array
            result[2 * i] = nums[i];
            // Place the corresponding elements from the second half at odd indices in the result array
            result[2 * i + 1] = nums[i + n];
        }
        
        return result;
    }
};
