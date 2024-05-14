class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
         // Sort the array in non-decreasing order
        std::sort(nums.begin(), nums.end());

        int n = nums.size();

        // Calculate the product difference
        int productDifference = nums[n - 1] * nums[n - 2] - nums[0] * nums[1];

        return productDifference;
    }
};
