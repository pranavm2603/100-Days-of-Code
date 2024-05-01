class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int majorityElement = nums[0];
        int count = 1;

        // Iterate through the array
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == majorityElement) {
                // If current element is equal to majority element, increment count
                ++count;
            } else if (--count == 0) {
                // If count becomes 0, update majority element and reset count
                majorityElement = nums[i];
                count = 1;
            }
        }

        return majorityElement;
    }
};
