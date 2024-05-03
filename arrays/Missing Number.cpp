class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int totalSum = n * (n + 1) / 2; // Sum of first n natural numbers
        int numsSum = 0;

        // Calculate the sum of elements in nums
        for (int num : nums) {
            numsSum += num;
        }

        // Return the difference between the total sum and numsSum
        return totalSum - numsSum;
    }
};
