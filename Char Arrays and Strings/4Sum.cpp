class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         std::vector<std::vector<int>> result;

        // Sort the array to use two-pointer technique
        std::sort(nums.begin(), nums.end());

        int n = nums.size();

        // Fix the first element (a) and iterate over the rest of the array
        for (int a = 0; a < n - 3; ++a) {
            // Skip duplicate values for a
            if (a > 0 && nums[a] == nums[a - 1])
                continue;

            // Fix the second element (b)
            for (int b = a + 1; b < n - 2; ++b) {
                // Skip duplicate values for b
                if (b > a + 1 && nums[b] == nums[b - 1])
                    continue;

                int left = b + 1; // Initialize left pointer
                int right = n - 1; // Initialize right pointer

                // Use two-pointer technique for the remaining elements
                while (left < right) {
                    long long sum = static_cast<long long>(nums[a]) + nums[b] + nums[left] + nums[right];

                    if (sum < target) {
                        left++; // Increment left pointer if sum is too small
                    } else if (sum > target) {
                        right--; // Decrement right pointer if sum is too large
                    } else {
                        // Found a quadruplet that sums up to target
                        result.push_back({nums[a], nums[b], nums[left], nums[right]});

                        // Skip duplicate values for left and right
                        while (left < right && nums[left] == nums[left + 1]) left++;
                        while (left < right && nums[right] == nums[right - 1]) right--;

                        left++;
                        right--;
                    }
                }
            }
        }

        return result;
    }
};
