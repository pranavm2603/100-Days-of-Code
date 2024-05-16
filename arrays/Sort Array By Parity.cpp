class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
         int n = nums.size(); // Get the size of the array
        vector<int> result(n); // Initialize the result array with the same size as nums
        int evenIndex = 0; // Pointer for even numbers
        int oddIndex = n - 1; // Pointer for odd numbers
        
        // Iterate through the nums array
        for (int i = 0; i < n; ++i) {
            if (nums[i] % 2 == 0) {
                // Place even numbers at the beginning
                result[evenIndex++] = nums[i];
            } else {
                // Place odd numbers at the end
                result[oddIndex--] = nums[i];
            }
        }
        
        return result; // Return the result array
    }
};
